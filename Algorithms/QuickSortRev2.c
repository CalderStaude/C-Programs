#include <stdio.h>


//Not working!
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high){
   int i = low;
   int j = high;
   int pivot = arr[low];
   while(i<j){
        while(pivot > arr[i]){
            i++;
        }
        while(pivot < arr[j]){
            j--;
        if(i<j){
            swap(arr[i], arr[j]);
        }
        }
        swap(arr[low], arr[j]);
   } 
}

int qsort(int arr[], int low, int high){
    if(low < high){
        int pivot = partition(arr, low, high);
        qsort(arr, low, pivot -1);
        qsort(arr, pivot+1, high);
    }    
}

void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main(){

    int arr[] = {4, 2, 8, 3, 1, 5, 7,11,6};
    int size = sizeof(arr) / sizeof(int);
    printf("Before sorting\n");
    print_array(arr, size);
    qsort(arr, 0, size - 1);
    printf("After Sorting\n");
    print_array(arr, size);


    return 0;
}