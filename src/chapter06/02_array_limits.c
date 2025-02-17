//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>


#define SIZE 5

int main(void) {

    //array 定义一个首地址 SIZE则是往后的偏移值
    int array[SIZE] = {1, 2, 3, 4, 5};
    printf("%d\n", array[4]);
    int value = 5;
    //变长数组vla 数组的长度可以用变量来声明的数组，C语言标准从C99开始支持该特性，GCC提供了相应的扩展MSVC不支持
    int array2[value];
    printf("%d\n", array2[4]);
    return 0;

}