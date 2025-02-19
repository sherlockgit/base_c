//
// Created by Shorlock on 2025/2/16.
//

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void InitP(int *p,int default_value,int length) {
    p = malloc(length * sizeof(int));//在堆空间开辟一块内存赋值到指针上
    for (int i = 0; i < length; i++) {
        //由于堆空间分配的地址可能有别的值，所以可能值是之前的，需要初始化
        p[i] = default_value;
    }

}

void InitP2(int **pp,int default_value,int length) {
    *pp = malloc(length * sizeof(int));//在堆空间开辟一块内存赋值到指针上
    for (int i = 0; i < length; i++) {
        //由于堆空间分配的地址可能有别的值，所以可能值是之前的，需要初始化
        (*pp)[i] = default_value;
    }

}

void Test(int array[0]) {
    array[0] = 1;
}

void Test2(int *p) {
    *p = 1;
}
/**
 * 常见错误
 * 1忘记在使用完毕之后释放内存
 * 2使用了已经释放的内存
 * 3使用了超出边界的内存
 * 4改变内存的指针，导致无法正常释放
 * 建议
 * 1避免修改指向已分配的内存的指针
 * 2对于 free 之后的指针主动置为 NULL
 * 3避免将过多的指针指向动态分配的内存
 * 4动态内存遵从谁分配谁释放的原则
 * @return
 */
int main(void) {
    setlocale(LC_ALL, "");

    puts("#############p#############");
    /*动态内存分配*/
    int *p = malloc(SIZE * sizeof(int));//在堆空间开辟一块内存赋值到指针上
    for (int i = 0; i < SIZE; i++) {
        //由于堆空间分配的地址可能有别的值，所以可能值是之前的，需要初始化
        p[i] = i;
    }
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", p[i]);
    }
    free(p);//需要释放内存

    puts("#############p1#############");
    /*动态内存分配（默认初始化）*/
    int *p1;
    InitP(p1,1,SIZE);
    printf("%d\n", p1);
    // free(p1);//不能释放内存，只是值复制过去

    puts("#############p2#############");
    /*动态内存分配（正确做法）*/
    int *p2;
    InitP2(&p2,1,SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", p2[i]);
    }
    free(p2);//能释放内存

    puts("#############p3#############");
    /*动态内存分配（正确做法）通过调用函数*/
    int *p3 = calloc(SIZE, sizeof(int));//自动分配默认值为0
    if (p3 != NULL) {
        for (int i = 0; i < SIZE; i++) {
            printf("%d\n", p3[i]);
        }
    }else {
        //已经没有内存可分配时会返回null
        puts("#############memory error#############");
    }

    puts("#############p3 to max#############");
    /*动态内存分配扩大指针内存*/
    p3 = realloc(p3, SIZE * sizeof(int) * 2);
    for (int i = 0; i < SIZE * 2; i++) {
        printf("%d\n", p3[i]);
    }
    free(p3);


    puts("#############other#############");
    int array[1] = {5};
    Test(array);
    printf("%d\n",  array[0]);

    int a = 5;
    Test(&a);
    printf("%d\n",  a);

}