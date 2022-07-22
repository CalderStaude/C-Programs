/*  
    This file contains an implmentation of 
    Binary search using an itterative approach.
    The function returns the index in which the
    desired value is located in.
*/

#include <stdio.h>

int binarySearch(int value, int arr[], int high, int low){
    //Can potentally multi-thread and split array into two.
    int mid;
    while (low < high)  {
  
        // normal iterative binary search algorithm
        mid = (high - low) / 2 + low;
  
        if (arr[mid] == value)  {
            return value;
         } else if (arr[mid] > value)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};

    int index = binarySearch(2, arr, 5, 0);
    if( index == -1){
        printf("Value not found");
    } else {
        printf("Value found at index %d", index);
    }
    
}