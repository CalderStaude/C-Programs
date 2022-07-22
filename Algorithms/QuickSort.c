#include <stdio.h>


// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (pivot >= arr[i])
            i++;
        while (pivot < arr[j])
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
 
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
 
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");;
}
 
int main()
{
    int arr[] = {4, 2, 8, 3, 1, 5, 7,11,6};
    int size = sizeof(arr) / sizeof(int);
    printf("Before sorting\n");
    printArray(arr, size);
    quickSort(arr, 0, size - 1);
    printf("After Sorting\n");
    printArray(arr, size);
    return 0;
}