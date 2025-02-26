//
// Created by Shorlock on 2025/2/16.
//


#include <stdio.h>
#include <string.h>

int main(void) {
    char str[2];
    int error_no = strcpy_s(str, 2, "Too long!");//附带“_s” 安全版本的检查
    if (error_no) {
        perror("strcpy_s returns ");
    }
    return 0;
}