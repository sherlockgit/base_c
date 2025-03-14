


#include <stdio.h>

#define BUFSIZE 8
void Echo() {
    char str[BUFSIZE];
    while (1) {
        size_t size = fread(str, sizeof(char), BUFSIZE, stdin);//str 存入的字节，sizeof(char)每个字符的大小,BUFSIZE一次最多读多少；stdin读哪个文件
        if (size < BUFSIZE) {
            if (feof(stdin)) {
                printf("EOF\n");
                fwrite(str, sizeof(char), size, stdout);
            }else if (ferror(stdin)) {
                perror("fread");
            }
            break;
        }
        fwrite(str, sizeof(char), BUFSIZE, stdout);
    }
}


int main(void) {
    Echo();
}