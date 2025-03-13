


#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


int main(void) {
    FILE *fptr = fopen("CMakeLists.txt", "r");
    if (fptr) {
        puts("File opened successfully");
        fclose(fptr);
    }else {
        printf("error no %d\n",errno);
        puts(strerror(errno));
        perror("fopen");
    }

    return 0;

}