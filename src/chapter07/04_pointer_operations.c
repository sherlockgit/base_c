//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>


int main(void) {
    int a = 1;
    int *p = &a;

    //指针的加减数值取决于指针类型的字节大小
    printf("%d\n", &a);
    printf("%d\n", p + 1);
    printf("%d\n", sizeof(int));

    int array[5] = {0, 1, 2, 3, 4}; //数组就是一个特殊的指针 等价于 int *const array
    int *p1 = array;
    printf("array[3] %d\n",array[3]);
    printf("*(p1 + 3) %d\n", *(p1 + 3));
    printf("*(array + 3) %d\n", *(array + 3));
    printf("p1[3] %d\n", p1[3]);

    printf("p1 + 3 > p1 + 2 %d\n", p1 + 3 > p1 + 2);
    printf("p1 + 3 == p1 + 3 %d\n", p1 + 3 == p1 + 3);
    printf("*(p1 + 3) > *(p1 + 2) %d\n", *(p1 + 3) > *(p1 + 2));
    return 0;


}