#include <stdio.h>
#include <stdbool.h>

/**
* 函数的原型
* 1.函数名
* 2.函数返回值类型，如果没有写，默认int
* 3.函数参数列表，参数类型，参数的顺序，参数的形参名不重要
*/
int Add(int, int);

int main(void) {

    int sum = Add(1, 2);
    printf("%d\n", sum);

    printf("Hello, World!\n");
    return 0;
}

int Add(int a, int b){
    return a + b;
}
