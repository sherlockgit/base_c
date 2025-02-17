//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>

//定义数组参数的大小时需要将函数大小作为参数应用即n
int SumIntArray(int a[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    return sum;
}

#define SIZE 10

int main(void) {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = SumIntArray(a,SIZE);
    printf("%d",sum);
    return 0;

}