


#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

char std_buf[BUFSIZ];

int main(void) {

    setvbuf(stdout, std_buf, _IOLBF, BUFSIZ);


    FILE *fptr = fopen("CMakeLists.txt", "r");
    char buffer[1024];
    setvbuf(fptr, buffer, _IOLBF, 1024);//设置缓冲区
    if (fptr) {
        puts("File opened successfully");
        fclose(fptr);
    }else {
        printf("error no %d\n",errno);
        puts(strerror(errno));
        perror("fopen");
    }
    fflush(stdout); //刷新缓冲区
    return 0;

}