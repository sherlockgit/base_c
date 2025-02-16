#include <stdio.h>

#define C 555 //宏 stdio.h 也是宏预处理之后会将文件里的内容填充到本文件
int main(void) {
    // const：只读变量（常量）
    const int a = 10;
    printf("a:%d\n", a);

    //指针（通过指针还是能修改值）
    int *b = &a;
    *b = 20;
    printf("a:%d\n", a);

    //真正意义上的常量“宏”
    printf("C:%d\n", C);

#undef C//取消“宏”


    printf("Hello, World!\n");
    return 0;
}
