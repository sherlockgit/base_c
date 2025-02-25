//
// Created by Shorlock on 2025/2/16.
//


#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //atoi 字符串转数字
    printf("atoi %d\n",atoi("12345"));
    printf("atoi %d\n",atoi("  12345abc"));
    printf("atoi %d\n",atoi("-12345"));
    printf("atoi %d\n",atoi("123asd45"));
    printf("atoi %d\n",atoi("0x10"));

    //atoi 字符串转double
    printf("atoi %f\n",atof("12.34"));
    printf("atoi %f\n",atof("-12e2"));
    printf("atoi %f\n",atof("  12.34asd"));
    printf("atoi %f\n",atof("0x10"));
    printf("atoi %f\n",atof("0x10p3"));

    //ato...
    //.....


    //strtoX 更强大的字符串转数字标准库
    char const *const kInput = "12345 2000000000000000000000000000 3 -4 5 15664a44";
    printf("%s\n",kInput);
    char const *start = kInput;
    char *end;
    while (1) {
        errno = 0;
        const long i = strtol(start,&end,10);
        if (start==end) {
            break;
        }
        printf("'%.*s'\t == > %ld",(int)(start - end),start,i);

        if (errno == ERANGE) {
            perror("strtol");
        }

        putchar('\n');
        start = end;
    }


    return 0;
}