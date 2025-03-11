


#include <stdio.h>
#include <time.h>
#define PI 3.1415926
void DoHardWork(){
    double sum;
    for(int i=0;i<100000000;i++){
        sum = sum + i * i / PI;
    }
    printf("sum = %f\n",sum);
}

int main(void) {
    time_t start = time(NULL);
    DoHardWork();
    time_t end = time(NULL);
    double diff = difftime(end,start);
    printf("diff = %f\n",diff);

    clock_t start_time = clock();
    DoHardWork();
    clock_t end_time = clock();
    printf("diff_time = %f\n",(end_time - start_time)* 1.0 / CLOCKS_PER_SEC );

    return 0;

}