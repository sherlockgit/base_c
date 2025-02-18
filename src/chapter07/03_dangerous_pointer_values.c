//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>

int *pointer = NULL;

void DangerousPointerValues() {
    int a = 1;
    pointer = &a;//当函数结束时由于a被销毁 pointer将称为野指针 应当函数结束时将pointer 设置为NULL
    printf("%x\n", pointer);
}


int main(void) {
    int a = 1;
    // printf("%x\n", &a);
    // int *p = (int *)0x197ffb6c; 不要直接硬编码
    // printf("%d\n", *p);

    int *p = NULL; //展示不需要存值的可以用NULL覆盖

    DangerousPointerValues();
    printf("%x\n", pointer);
    return 0;


}