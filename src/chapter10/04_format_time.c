


#include <stdio.h>
#include <time.h>
int main(void) {
    time_t now;
    time(&now);
    struct tm *timeinfo = localtime(&now);//将time_t的时间戳转为时间日期
    printf("tm year %d\n", timeinfo->tm_year);
    printf("tm month %d\n", timeinfo->tm_mon);
    printf("tm day %d\n", timeinfo->tm_mday);
    printf("tm hour %d\n", timeinfo->tm_hour);
    printf("tm min %d\n", timeinfo->tm_min);
    printf("tm sec %d\n", timeinfo->tm_sec);

    puts(asctime(timeinfo));
    puts(ctime(&now));

    char str[20];
    size_t size = strftime(str, sizeof(str), "%Y-%m-%d %H:%M:%S", timeinfo);
    puts(str);

    return 0;

}