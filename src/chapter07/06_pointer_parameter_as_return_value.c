//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>
int SumIntArray(int a[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    return sum;
}

void SumIntArray2(int a[], int n,int *sum){
    *sum = 0;
    for(int i=0;i<n;i++){
        *sum += a[i];
    }
}


int main(void) {
    int array[3] = {1,2,3};
    int all_sum = SumIntArray(array, 3);
    printf("%d\n", all_sum);
    int sum;
    SumIntArray2(array,3,&sum);
    printf("%d\n",sum);

}