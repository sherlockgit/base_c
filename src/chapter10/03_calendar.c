


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

    timeinfo->tm_min = 60;

    mktime(timeinfo);
    printf("tm year %d\n", timeinfo->tm_year);
    printf("tm month %d\n", timeinfo->tm_mon);
    printf("tm day %d\n", timeinfo->tm_mday);
    printf("tm hour %d\n", timeinfo->tm_hour);
    printf("tm min %d\n", timeinfo->tm_min);
    printf("tm sec %d\n", timeinfo->tm_sec);

    struct tm *timeinfo3 = gmtime(&now);
    printf("gmt year %d\n", timeinfo3->tm_year);
    printf("gmt month %d\n", timeinfo3->tm_mon);
    printf("gmt day %d\n", timeinfo3->tm_mday);
    printf("gmt hour %d\n", timeinfo3->tm_hour);
    printf("gmt min %d\n", timeinfo3->tm_min);
    printf("gmt sec %d\n", timeinfo3->tm_sec);

    return 0;

}