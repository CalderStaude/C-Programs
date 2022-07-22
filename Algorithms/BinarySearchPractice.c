#include <stdio.h>
#define VERBOSE 1

int printArrForSort(int arr[], int arrSize, int start, int end){
    for(int i=start; i<(end - start); i++){
        if(i == (end - start - 1)){
            printf("%d\n", arr[i]);
        } else {
            printf("%d, ", arr[i]);
        }
    }
}


int binarySearch(int value, int arr[], int high, int low){
    //Can potentally multi-thread and split array into two.
    int arrSize = high + 1;
    while(high > low){
        int mid = ((high - low) / 2) + low;       
        int midVal = arr[mid];
        if(VERBOSE){
            printf("mid: %d\thigh: %d\tlow: %d\t", mid, high, low);
            printArrForSort(arr, arrSize, low, high);
        }
        
        if(value < midVal){
            high = mid;
        } else if (value > midVal){
            low = mid;
        } else if (value == midVal){
            return mid;
        } else {
            printf("\n<<< Error Occured >>>\n");
        }
    }


}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 10, 12, 15};

    int index = binarySearch(6, arr, 8, 0);
    if( index == -1){
        printf("Value not found");
    } else {
        printf("Value found at index %d", index);
    }
    
}