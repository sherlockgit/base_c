#include <stdio.h>
#include <stdarg.h>

//变长参数
void handleVarargs(int arg_count,...){
    //定义va_list 用于获取变长参数
    va_list args;
    //开始遍历
    va_start(args, arg_count);
    for (int i = 0; i < arg_count; i++) {
        //取出对应的参数（va_list,type）
        int arg = va_arg(args, int);
        printf("arg = %d\n", arg);
    }
    //结束遍历
    va_end(args);
}

int main(void) {

    handleVarargs(2, 3, 4);

    printf("Hello, World!\n");
    return 0;
}




