//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>
int main(void) {
    //联合体 所有字段共用同一块其中最大字段的内存；由于该规则，则后赋值的字段会覆盖前面赋值的字段
    typedef union {
        char a;
        short b;
        int c;
    } Union;

    Union u;
    u.a = 1;
    u.b = 2;
    u.c = 3;

    printf("u.a %d\n", u.a);
    printf("u.b %d\n", u.b);
    printf("u.c %d\n", u.c);
    printf("sizeof(Union) %d\n", sizeof(Union));


    return 0;
}