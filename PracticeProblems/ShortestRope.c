#include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void printArr(int arr[], int n){
   for(int i=0; i<n; i++){
        if(i == n-1)
            printf("%d\n");
        else
            printf("%d, ", arr[i]);
   } 
}

int minCost(int arr[], int n)
{
    bubbleSort(arr, n);
    printf("After Sorting");
    printArr(arr, n);
    int cost = 0;
    for(int i=0; i<n; i +=2){
        printf("Cost: %d, Arr[%d]: %d, Arr[%d]: %d\n", cost, i, arr[i], i+1, arr[i+1]);
        cost += arr[i] + arr[i+1];
    }
}

int main(){

    int arr[] = {4, 3, 2, 6};
    int arrSize = sizeof(arr)/sizeof(0[arr]);

    minCost(arr, arrSize); 

    return 0;
}