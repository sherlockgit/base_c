


#include <errno.h>
#include <stdio.h>


void ReadFile(FILE *file) {
    int next_char = getc(file);
    while (next_char != EOF) {
        putchar(next_char);
        next_char = getc(file);
    }

}

int main(void) {

    FILE *fptr = fopen("CMakeLists.txt", "r");
    ReadFile(fptr);
    fclose(fptr);

    while (1) {
        int next_char = getchar(); //获取键盘输入的字符，回车结束
        if (next_char == EOF) {
            break;
        }else if (next_char == '\n') {
            continue;
        }
        putchar(next_char);//向控制台输出字符
    }

    return 0;

}