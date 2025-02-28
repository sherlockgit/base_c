//
// Created by Shorlock on 2025/2/16.
//


#include <stdlib.h>
#include <time.h>
#include <sys/timeb.h>

int main(void) {
    time_t;//表示从 1970年1月1日 00:00:00 UTC（Unix纪元） 到当前时间的秒数。
    clock_t; //表示程序运行的 CPU 时间（以时钟 ticks 为单位）。
    struct tm; //表示 分解时间（broken-down time），即年、月、日、时、分、秒等。
    struct timespec; //表示 高精度时间，包含秒和纳秒。
    struct timeb; //表示时间戳，包含秒和毫秒。
#ifdef __unix__
    struct timeval; //表示时间戳，包含秒和微秒。
#endif
    return 0;

}