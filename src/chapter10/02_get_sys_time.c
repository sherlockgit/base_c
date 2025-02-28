//
// Created by Shorlock on 2025/2/16.
//


#include <stdio.h>
#include <stdlib.h>
#include <sys/timeb.h>
#include <time.h>
#include "../../include/time_utils.h"
int main(void) {
    time_t t;
    time(&t);
    printf("%ld\n", t);
    t = time(NULL);
    printf("%ld\n", t);

    printf("%lld\n", TimeInMilliSeconds());
    printf("%lld\n", TimeInMilliSeconds());
    printf("%lld\n", TimeInMilliSeconds());
    printf("%lld\n", TimeInMilliSeconds());

    return 0;

}