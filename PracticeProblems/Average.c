#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 5, 5, 5, 5, 5};
    int ArrSize = sizeof(arr)/sizeof(0[arr]);

    int sum = 0;
    for(int i=0; i<12; i++){
        sum += arr[i];
    }
    float avg = (float)sum/12;
    printf("Avg: %f", avg);


    return 0;
}