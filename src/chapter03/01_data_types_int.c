#include <limits.h>
#include <stdio.h>

int main(void) {
    short short_int = 0; //短整型
    int int_int = 0; //整型
    long long_int = 0; //长整形
    long long long_long_int = 0; //最大长整形
    unsigned int unsigned_int = 0; //无符号整形
    unsigned long unsigned_long = 0; //无符号长整形
    unsigned long long unsigned_long_long = 156545; //无符号最大长整形

    printf("short int: %hd\n", short_int);// h 表示short d 表示十进制
    printf("int int: %d\n", int_int);// d 表示十进制
    printf("long: %ld\n", long_int);// l 表示long d 表示十进制
    printf("long long int: %lld\n", long_long_int);
    printf("unsigned int: %u\n", unsigned_int);//u 表示unsigned
    printf("unsigned long: %lu\n", unsigned_long);
    printf("unsigned long long int: %llu\n", unsigned_long_long);

    printf("max short int %hd,min short int %hd\n",SHRT_MAX,SHRT_MIN);
    printf("max int %d,min int %d\n",INT_MAX,INT_MIN);
    printf("max long %ld,min long %ld\n",LONG_MAX,LONG_MIN);
    printf("max long long %lld,min long long %lld\n",LLONG_MAX,LLONG_MIN);
    printf("max unsigned int %u,min unsigned int %u\n",UINT_MAX,0);
    printf("max unsigned long %lu,min unsigned long %u\n",ULONG_MAX,0);
    printf("max unsigned long long %llu,min unsigned long long %u\n\n",ULLONG_MAX,0);

    int other = 100; //整型
    printf("other = %x\n",other); //x 表示十六进制
    printf("other = %o\n",other); //o 表示八进制

    printf("Hello, World!\n");
    return 0;
}
