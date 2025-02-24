//
// Created by Shorlock on 2025/2/16.
//

enum Color {RED, GREEN, BLUE};

// 枚举类似于一个整形数组
#include <stdio.h>
int main(void) {

    enum Color color;
    color = RED;

    if (RED == color) {
        printf("RED");
    }

    printf("%d\n", RED);
    printf("%d\n", color);


    return 0;
}