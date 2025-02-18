//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>


int main(void) {
    int a = 2;
    int *p = &a;//指针也是一个变量，只不过这个变量存的类型的地址，可以是其他变量的地址
    printf("%x\n", &a);
    printf("%x\n", p);

    printf("%d\n", *p); //*p 表示指针值中存的地址所指向变量地址中保存的值
    printf("%d\n", a);

    int **pp = &p; // 指针存的变量是另外一个指针变量的地址
    printf("%x\n", &p);
    printf("%x\n", pp);

    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", **pp);
    return 0;

}