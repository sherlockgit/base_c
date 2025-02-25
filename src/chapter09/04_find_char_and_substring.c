//
// Created by Shorlock on 2025/2/16.
//


#include <stdio.h>
#include <string.h>

int main(void) {

    char *str = "Hello World";
    char *substr = strchr(str, 'l');//字符串查找
    char *substr_reverse = strrchr(str, 'l');//反向字符串查找

    printf("%s\n", ++str);
    printf("%s\n", substr);
    printf("%s\n", substr_reverse);

    char *substring_position = strstr(str, "Wor");
    printf("substring_position %s\n", ++substring_position);


    char *str2 = "C, 1972; java, 1995";
    char *break_set = ",;";

    int count = 0;
    char *p = str2;

    do {
        //多个字符的字符串查找
        p = strpbrk(p, break_set);
        if (p) {
            puts(p);
            p++;
            count++;
        }
    }while (p);


    return 0;
}