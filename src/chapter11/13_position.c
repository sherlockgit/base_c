



#include <stdio.h>
#include <io.h>




int main(void) {
    FILE *file = fopen("data/test_data.txt","rb");
    printf("ftell %d\n", ftell(file)); //ftell 当前文件的位置，只支持2进制文件
    char buffer[2];
    fread(buffer,sizeof(char),2,file);
    printf("ftell %d\n", ftell(file));
    fseek(file,0,SEEK_SET);
    printf("ftell %d\n", ftell(file));
    fseek(file,4,SEEK_SET); //fseek 文件位置定位 SEEK_SET：从文件头开始计算;SEEK_CUR：从当前开始计算；SEEK_END：从结尾开始计算
    printf("ftell %d\n", ftell(file));
    fseek(file,4,SEEK_CUR);
    printf("ftell %d\n", ftell(file));
    fseek(file,4,SEEK_END);
    printf("ftell %d\n", ftell(file));
}