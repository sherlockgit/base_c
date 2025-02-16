//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>
#define MAX_BAD(a,b) a>b?a:b //宏函数
#define MAX_GOOD(a,b) (a)>(b)?(a):(b) //宏函数 优化写法
//多行宏函数
#define MAX_LINE(a,b) \
    ((a)>(b)?(a):(b))

int main(void) {
    int a = MAX_BAD(5,10);
    int b = MAX_GOOD(5,MAX_GOOD(10,20));
    int c = MAX_LINE(5,MAX_LINE(10,20));

    printf("MAX_BAD %d\n",a);
    printf("MAX_GOOD %d\n",b);
    printf("MAX_LINE %d\n",c);


    return 0;
}