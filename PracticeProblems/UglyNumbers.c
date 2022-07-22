#include <stdio.h>

int printArr(int arr[], int arrSize){
    for(int i=0; i<arrSize; i++){
        printf("%d, ", arr[i]);
    }
}

int main(){

int index = 8;
int uglynumber = 0;
int uglynumber_add1;
int uglynumber_add2;
int uglynumber_add3;
int uglynumber_add5;
int notAUnglyNumberFlag = 0;

int arr[index];


for(int i=0; i<index; i++){
    
    uglynumber_add1 = uglynumber + 1;
    uglynumber_add2 = uglynumber + 2;
    uglynumber_add3 = uglynumber + 3;
    uglynumber_add5 = uglynumber + 5;

    if(uglynumber_add1 % 3 == 0 && uglynumber_add1 % 5 == 0 && uglynumber_add1 % 2 == 0){
        uglynumber = uglynumber_add1;
    } else if(uglynumber_add2 % 3 == 0 && uglynumber_add2 % 5 == 0){
        uglynumber = uglynumber_add2;
    } else if(uglynumber_add3 % 2 == 0 && uglynumber_add3 % 5 == 0){
        uglynumber = uglynumber_add3;
    } else if(uglynumber_add5 % 3 == 0 && uglynumber_add5 % 2 == 0){
        uglynumber = uglynumber_add5;
    } else {
        uglynumber++;
        i--;
        notAUnglyNumberFlag = 1;
    }

    arr[i] = uglynumber;

    printf("Index:\t%d number:\t%d\n", i, uglynumber);
}

printArr(arr, index);

printf("The ugly number is: %d\n", uglynumber);

}