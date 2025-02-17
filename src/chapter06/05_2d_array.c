//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>

void SumIntArray(int i,int y, int array[][y], int result[]) {
    for(int j=0;j<i;j++) {
        for(int k=0;k<y;k++) {
            result[j] = result[j] + array[j][k];
        }
    }
}

int main(void) {
    //二维数组
    int arr[3][2] = {{1, 2}, {3, 4},{5,6}};

    //{0} 默认所有的值都为0
    int result[3] = {0};
    SumIntArray(3,2,arr,result);
    for (int i = 0; i < 3; i++) {
        printf("%d\n",result[i]);
    }
    return 0;

}