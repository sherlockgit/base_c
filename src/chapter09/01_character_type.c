//
// Created by Shorlock on 2025/2/16.
//


#include <stdio.h>
#include <ctype.h> //字符判断标准库
int main(void) {

    printf("isdigit %d\n",isdigit('0')); //是否是数字
    printf("isspace %d\n",isspace(' ')); //是否是空格
    printf("isalpha %d\n",isalpha('a')); //是否是字母
    printf("isalnum %d\n",isalnum('a')); //是否是字母或数字
    printf("isalnum %d\n",isalnum('1')); //是否是字母或数字
    printf("ispunct %d\n",ispunct('.')); //是否是标点符号
    printf("toupper %c\n",toupper('a')); //大写转换

    return 0;
}