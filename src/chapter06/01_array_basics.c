//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>


#define SIZE 5

int main(void) {
    int array[SIZE] = {1, 2, 3, 4, 5};
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", array[i]);
    }

    int array_2[SIZE] = {[1] = 5, 3, 4, 5};
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", array_2[i]);
    }

    int array_3[SIZE];
    for (int i = 0; i < SIZE; i++) {
        array_3[i] = i;
        printf("%d\n", array_3[i]);
    }
    return 0;
}