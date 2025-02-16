#include <stdio.h>
//查找当前源文件的所在路径；查找工程的头文件搜索路径
#include "../../include/factorial.h"

int main(void) {
    printf("%d\n", Factorial(1));
    printf("%d\n", Factorial(2));
    printf("%d\n", Factorial(3));
    printf("hello world\n");
    return 0;
}




