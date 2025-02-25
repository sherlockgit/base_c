//
// Created by Shorlock on 2025/2/16.
//


#include <stdio.h>
#include <string.h>

int main(void) {

    char *str1 = "Hello World";
    printf("%d\n", strlen(str1)); //字符串长度
    printf("%d\n", strnlen(str1,5));  //字符串长度（限定长度）

    char *str2 = "Hello World";
    char *str3 = "Hello ABCDE";
    printf("%d\n", strcmp(str2,str3)); //字符串对比
    printf("%d\n", strncmp(str2,str3,5)); //字符串对比（限定长度）
    return 0;
}