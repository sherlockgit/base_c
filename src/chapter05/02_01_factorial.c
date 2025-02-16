//
// Created by Shorlock on 2025/2/16.
//
#include "../../include/factorial.h"
unsigned int Factorial(unsigned int n) {
    if (n == 1) {
        return 1;
    }else {
        return n * Factorial(n - 1);
    }
}