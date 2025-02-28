//
// Created by Shorlock on 2025/2/16.
//

#ifndef TIME_UTILS_H
#define TIME_UTILS_H

#if defined(_WIN32)
#include <sys/timeb.h>
#elif defined(__UNIX__) || defined(__APPLE__)
#include <sys/time.h>
#endif

typedef long long long_time_t;

long_time_t TimeInMilliSeconds(void){
#if defined(_WIN32)
    struct timeb time_buffer;
    ftime(&time_buffer);
    return (time_buffer.time*1000 + time_buffer.millitm);
#elif defined(__UNIX__) || defined(__APPLE__)
    struct timeval time_value;
    gettimeofday(&time_value, NULL);
    return (time_value.tv_sec*1000 + time_value.tv_usec/1000);
#elif defined(__STDC__) && __STDC_VERSION__ == 201112L
    struct timespec timespec_value;
    timespec_get(&timespec_value, TIME_UTC);
    return (timespec_value.tv_sec*1000 + timespec_value.tv_nsec/1000000);
#else
    time_t current_time = time(NUll);
    return current_time *1000;
#endif
}
#endif
