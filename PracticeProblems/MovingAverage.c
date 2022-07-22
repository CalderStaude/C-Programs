#include <stdio.h>

int average(int* arr, int n, int avg, int start){
    int i = start;
    int sum = avg*n;
    for(; i<n; i++){
       sum += arr[i];
    }

    return (int) sum/n;
}

int main(){

    int arr[10] = {1, 2, 3, 4, 5};
    int arrSize = 5; // sizeof(arr)/sizeof(0[arr]);
    int avg1 = average(arr, arrSize, 0, 0);

    printf("Current average: %d\n", avg1);

    arr[6] = 1000;
    int avg2 = average(arr, 7, avg1, 6);
    printf("new avg: %d\n", avg2);

    return 0;
}