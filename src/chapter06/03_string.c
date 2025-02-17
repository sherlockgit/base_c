//
// Created by Shorlock on 2025/2/16.
//

#include <locale.h>
#include <stdio.h>


int main(void) {
    /*字符串实际是字符类型的数组*/
    char str[11] = "Hello World";
    for (int i = 0; i < 11; i++) {
        printf("%c\n", str[i]);
    }

    //打印时多了个“” C语言字符结尾时默认附带了一个 NULL 即\0结尾的字符，则改字符长度实际是12个 或者直接不标明长度
    printf("%s\n", str);
    char str_all[12] = "Hello World";
    printf("%s\n", str_all);
    char str_all2[] = "Hello World";
    printf("%s\n", str_all2);


    //直接打印会乱码 需要用宽字符来存储
    char string_zh[] = "小宇宙";
    printf("%s\n", string_zh);
    wchar_t wstring_zh[] = L"小宇宙";
    setlocale(LC_ALL, "");
    wprintf(L"%ls\n", wstring_zh);
    return 0;

}