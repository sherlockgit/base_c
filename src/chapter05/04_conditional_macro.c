//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>

/**
* 1.#ifdef 如果定义了
* 2.#ifndef 如果没定义
* 3.#if 如果...
*/
#define DEBUG
int main(void) {
#ifdef DEBUG
    puts("DEBUG ENV");
#endif

#if defined(_WINDOWS)
    puts("_WINDOWS");
#endif
    return 0;
}