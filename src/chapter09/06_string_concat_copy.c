//
// Created by Shorlock on 2025/2/16.
//


#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "Hello World";
    char dest[100] = "C said:";
    strcat(dest, str); //字符串的拼接
    puts(dest);

    char str1[] = "Hello World";
    char dest1[20] = "C said:";
    strcpy(dest1 + strlen(dest1), str1); //字符串的复制
    puts(dest1);
    return 0;
}