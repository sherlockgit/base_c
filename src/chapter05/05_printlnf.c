//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>
#include<stdarg.h>

void Printlnf(const char *format, ...) {
    va_list args;
    va_start(args,format);
    vprintf(format, args);
    printf("\n");
    va_end(args);
}

#define PRINTLNF(format, ...) printf("("__FILE__":%d) %s :"format"\n",__LINE__,__FUNCTION__, ##__VA_ARGS__);
#define PRINT_INT(format) PRINTLNF(#format": %d", format);

int main(void) {

    int a = 5;
    Printlnf("a %d",a);
    PRINTLNF("a %d",a)
    PRINT_INT(a);
    return 0;
}