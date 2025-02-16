#include <limits.h>
#include <stdio.h>

int main(void) {
    // 字符集 ASCII 127
    char a = 'a'; //97
    char char_1 = '1'; //49
    char char_0 = '0'; //48
    char i = 0; //\0,
    char n = '\n';
    char char_1_escape_otc = '\61'; // \表示八进制
    char char_1_escape_hex = '\x31'; // \x表示十六进制

    printf("%d\n", a);
    printf("%d\n", char_1);
    printf("%d\n", char_0);
    printf("%d\n", i);
    printf("%d\n", n);
    printf("%d\n", char_1_escape_otc);
    printf("%d\n", char_1_escape_hex);
    printf("%c\n", a);
    printf("%c\n", char_1);
    printf("%c\n", char_0);
    printf("%c\n", n);
    printf("%c\n", i);
    printf("%c\n", char_1_escape_otc);
    printf("%c\n", char_1_escape_hex);

    //Unicode CJK
    //C95之后支持
    wchar_t zhong = L'中';
    printf("%d\n", zhong);



    printf("Hello, World!\n");
    return 0;
}
