//
// Created by Shorlock on 2025/2/16.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *str = "Hello World";
    char *substr = strchr(str, 'l');//字符串查找
    void *result = memchr(str,'l',10);//字符串查找

    printf("%s\n", substr);
    printf("%s\n", result);


    char *str2 = "Hello World";
    char *str3 = "Hello ABCDE";
    printf("%d\n", strcmp(str2,str3)); //字符串对比
    printf("%d\n", memcmp(str2,str3,5)); //字符串对比

    char *str4 = malloc(10);
    memset(str4, 0, 10);
    printf("%s\n", str4);
    free(str4);

    char str_cpy1[] = "Hello World";
    char dest1[20] = "C said:";
    strcpy(dest1 + strlen(dest1), str_cpy1); //字符串的复制
    puts(dest1);

    char str_cpy2[] = "Hello World";
    char dest2[20] = "C said:";
    memmove(dest2 + strlen(dest2), str_cpy2, 100);
    puts(dest2);
    return 0;
}