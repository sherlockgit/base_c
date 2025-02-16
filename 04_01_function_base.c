#include <stdio.h>
#include <stdbool.h>

int Add(int a, int b){
    return a + b;
}

int main(void) {

    int sum = Add(1, 2);
    printf("%d\n", sum);

    printf("Hello, World!\n");
    return 0;
}
