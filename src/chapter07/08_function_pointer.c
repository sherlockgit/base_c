//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void callFunction(int (*add_ptr)(int, int)) {
    printf("%d\n", add_ptr(1, 2));
}

typedef int (*SubPtr)(int, int);

int sub(int a, int b) {
    return a - b;
}

int main(void) {

    //函数指针是指向函数的指针变量。通过函数指针，可以间接调用函数。它存储的是函数的入口地址。函数名本身就是一个指向函数的指针。
    int (*add_ptr)(int, int) = add;
    printf("%d\n", add_ptr(1,2));
    printf("%d\n", (*add_ptr)(1,2));
    printf("%d\n", (&add)(1,2));
    callFunction(add);

    SubPtr sub_ptr = sub;
    printf("%d\n",sub_ptr(5,2));

}