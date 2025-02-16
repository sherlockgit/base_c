#include <stdio.h>
#include <stdbool.h>

int file_scope = 10; //文件作用域
// int Example(int a,int array[a]);//函数原型作用域

/**
 * @param num 寄存器变量，不经过内存，性能更好。一般由编译器自行确定，一般不需要手动添加
 */
void PassByRegister(register int num) {
    printf("%d\n", num);
}

int main(void) {
    //自动变量
    //函数、块作用域，随着函数与块的退出而销毁
    //没有初始默认值
    int a = 10;
    //静态变量
    //作用域全局，内存不会因函数退出而销毁
    //int 初始值默认0
    static int b = 100;

    printf("Hello, World!\n");
    return 0;
}




