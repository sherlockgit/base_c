


#include <stdio.h>
#include <time.h>
int main(void) {
    char *time = "2025-03-11 22:41:59.128";
    struct tm tm;
    int millis;

    sscanf(time, "%4d-%2d-%2d %2d:%2d:%2d.%3d",
        &tm.tm_year, &tm.tm_mon, &tm.tm_mday,&tm.tm_hour, &tm.tm_min, &tm.tm_sec, &millis);

    tm.tm_year -= 1900;
    tm.tm_mon -= 1;
    mktime(&tm);

    printf("%d\n", millis);

    return 0;

}