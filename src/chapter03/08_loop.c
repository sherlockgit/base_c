#include <stdio.h>
#include <stdbool.h>

int main(void) {
    //while
    int a = 0;
    while (a < 10) {
        printf("while %d\n", a);
        a++;
    }

    //do...while
    int b = 0;
    do {
        printf("do while %d\n", b);
        b ++;
    }while (b < 10);

    //for
    int c = 10;
    for (int i = 0; i < c; i++) {
        printf("for %d\n", i);
    }

    //continue;brack
    int d = 10;
    for (int i = 0; i < d; i++) {
        if (i==5) {
            continue;
        }
        if (i==8) {
            break;
        }
        printf("do for %d\n", i);

    }

    //goto
    int e = 0;
    begin:
    printf("begin %d\n",e);
    if (e++ < 10) {
        goto begin;
    }


    printf("Hello, World!\n");
    return 0;
}
