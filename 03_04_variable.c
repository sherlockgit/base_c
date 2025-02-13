#include <stdio.h>

int main(void) {
    // 类型 变量名
    int value;
    // 类型 变量名 = 值
    int value_init = 3;

    value = 4;
    value_init = 5;

    printf("value:%d\n", value);

    value_init = value;

    printf("size of value:%llu\n", sizeof(value));

    printf("address of value:%#x\n", &value);

    printf("Hello, World!\n");
    return 0;
}
