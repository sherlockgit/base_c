//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>


int main(void) {
    int a = 2;
    int b = 2;
    int *p = &a;
    int const *cp = &a;
    // *cp = 10; error const修饰的是 指针的值中地址指向的值
    cp = &b;
    int *const pc = &a;
     *pc = 10;
    //pc = &b;error const修饰的是 指针的值
    int const *const cpc = &a; // 指针的值 还是 指针的值中地址指向的值 都无法修改

    return 0;

}