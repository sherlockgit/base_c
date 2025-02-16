#include <stdio.h>

int main(void) {
    float f = 3.14f; //有效数字6位 7-8位 -10^37 ~ 10^37
    printf("size of float:%llu\n", sizeof(float));
    double d = 3.14; //15~16位
    printf("size of double:%llu\n", sizeof(double));

    float pai = 3.14e0; //支持科学计数法 浮点型在内存中 1位存1(符号) 23位存14(尾数) 7位存e0(指数)
    printf("size of pai:%f\n",pai);

    printf("Hello, World!\n");
    return 0;
}
