#include <stdio.h>

unsigned int Factorial(unsigned int n) {
    if (n == 1) {
        return 1;
    }else {
        return n * Factorial(n - 1);
    }
}

int main(void) {
    printf("%d\n", Factorial(1));
    printf("%d\n", Factorial(2));
    printf("%d\n", Factorial(3));

    printf("Hello, World!\n");
    return 0;
}




