#include <stdio.h>
#include <limits.h>

void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
 
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
}

void merge(int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
 
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
 
    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
        indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array
 
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
 
// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}


int kthSmallest(int mat[][], int n, int k)
{
    int arr[n*n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[j+i*n] = mat[i][j];
           // printf("adding %d to arr\n", mat[i][j]);
        }
    }
    
    
    mergeSort(arr, 0, n*n - 1);
   // for(int j=0; j<n*n; j++){
            
     //       printf("sorted %d \n", arr[j]);
       // }
       
   // printf("kth smallest: %d \n", arr[k-1]);
    return arr[k-1];
    
   // int values[k];
  //Your code here
    
  
}


int main(){
    int n = 100;
    int mat[100][100];
    int k = 3;      //find the 3rd smallest element
    kthSmallest(mat, n, k);
    return 0;
}