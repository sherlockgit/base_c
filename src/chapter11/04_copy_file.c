


#include <errno.h>
#include <stdio.h>
#include <string.h>
#define COPY_SUCCESS 0
#define COPY_ILLEGAL_ARGUMENTS -1
#define COPY_SRC_OPEN_ERROR -2
#define COPY_SRC_READ_ERROR -3
#define COPY_DEST_OPEN_ERROR -4
#define COPY_DEST_WRITE_ERROR -5
#define COPY_UNKNOWN_ERROR -100

int CopyFile(char const *scr,char const *dest) {
    if (!dest || !scr) {
        return COPY_ILLEGAL_ARGUMENTS;
    }
    FILE *src_file = fopen(scr,"r");
    if (!src_file) {
        puts(strerror(errno));//是一个全局变量，用于存储最近一次系统调用或库函数调用发生的错误代码。
        return COPY_SRC_OPEN_ERROR;
    }

    FILE *dest_file = fopen(dest,"w");
    if (!dest_file) {
        return COPY_DEST_OPEN_ERROR;
    }

    int result;

    while (1) {
        int next_char = fgetc(src_file);
        if (next_char == EOF) {
            if (ferror(src_file)) { //检查文件流是否发生了错误。
                result =  COPY_SRC_READ_ERROR;
            }else if (feof(src_file)) { //检查文件流是否到达了文件末尾
                result =  COPY_SUCCESS;
                break;
            }else {
                result =  COPY_UNKNOWN_ERROR;
            }
        }

        if (fputc(next_char, dest_file) == EOF) { //如果写入成功，返回写入的字符。如果写入失败，返回 EOF
            result = COPY_DEST_WRITE_ERROR;
        }

    }

    fclose(src_file);
    fclose(dest_file);
    return result;
}

int main(void) {
    printf("%d\n", CopyFile("data/test_data.txt", "data/test_data_copy.txt"));
}