int __cdecl puts(const char *_Str);
int printf (const char *__format, ...);

int main(void) {
    //头文件中包含的函数原型直接复制
    puts("puts Hello World!\n");
    printf("printf Hello, World!\n");
    return 0;
}




