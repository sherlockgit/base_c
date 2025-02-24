//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>
//#pragma pack(2) //全局以2的倍数去对齐
/**
* 内存对齐：其目的是为了提高对内存的访问效率
*/
int main(void) {

    //内存对齐方式为数据类型字节的倍数，若发现内存位置被占用则往后挪

    typedef struct {
        char a;//1
        char b;//1
        int c;//4
        short d;//2
        double e;//8
    } BadAlign;
    BadAlign bad_align = {'a', 'b', 1, 1, 1.0};
    //24个字节
    printf("sizeof(BadAlign) %d\n", sizeof(BadAlign));

    typedef struct {
        char a;//1
        char b;//1
        short d;//2
        int c;//4
        double e;//8
    } GoodAlign;
    GoodAlign good_align = {'a', 'b', 1, 1, 1.0};
    //16个字节
    printf("sizeof(GoodAlign) %d\n", sizeof(GoodAlign));

    return 0;


}