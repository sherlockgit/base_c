


#include <stdio.h>


void Echo() {
    char str[1024];
    while (1) {
        if (!fgets(str, 1024,stdin)) {
            break;
        }
        printf("%s", str);
    }
}


int main(void) {
    Echo();
}