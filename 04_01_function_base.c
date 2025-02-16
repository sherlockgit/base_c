#include <stdio.h>
#include <stdbool.h>

int Add(int a, int b){
    return a + b;
}

//(void) c语言中表示一个参数都没有 ()表示不知道有几个参数
int main(void) {

    int sum = Add(1, 2);
    printf("%d\n", sum);

    printf("Hello, World!\n");
    return 0;
}
