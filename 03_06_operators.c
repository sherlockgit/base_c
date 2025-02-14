#include <stdio.h>

int main(void) {
    // = 赋值运算符
    int first = 0;
    int second;
    int third;
    third = second = first;
    printf("first %d\n", first);
    printf("second %d\n", second);
    printf("third %d\n", third);

    //+ - * / %
    int a = 2;
    int b = 3;
    int sum = a + b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;
    int diff =  b - a;
    printf("sum = %d\n", sum);
    printf("product = %d\n", product);
    printf("quotient = %d\n", quotient);
    printf("remainder = %d\n", remainder);
    printf("diff = %d\n", diff);

    //关系运算符 > < >= <= == != 正确是返回1 错误时返回0 C99之后才映入布尔，即true和false
    printf("3 > 2 %d\n", 3 > 2);
    printf("3 < 2 %d\n", 3 < 2);
    printf("3 <= 2 %d\n", 3 <= 2);
    printf("3 >= 2 %d\n", 3 >= 2);
    printf("3 == 2 %d\n", 3 == 2);
    printf("3 != 2 %d\n", 3 != 2);

    // 逻辑运算符 与：&& 或：||
    printf("3 > 2 && 3 < 2 %d\n", 3 > 2 && 3 < 2);
    printf("3 > 2 || 3 < 2 %d\n", 3 > 2 || 3 < 2);

    //++ --
    int i = 0;
    int j = i++;
    j = ++i;
    printf("i = %d, j = %d\n", i, j);

    // 位运算符
    // &：相同为1 不同为0
    // |：有1为1 不同为0
    // ^：不同为1 相同为0
    // ~:1得0 0得1
    int d = 1; //0001
    int e = 2; //0010
    int f = 4; //0100
    printf("e | f %d\n", e | f); //0110


    //移位运算 << >>
    printf("e << 2 %d\n", e << 2); //0110


    printf("Hello, World!\n");
    return 0;
}
