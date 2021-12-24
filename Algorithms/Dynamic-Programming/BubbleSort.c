/**
 * @file BubbleSort.c
 * @author Calder Staude
 * @brief Runs in O(n^2) Space O(n)
 * @version 0.1
 * @date 2021-12-24
 */

#include <stdio.h>
#include <ctype.h>

void SwapValues(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void BubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)     
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              SwapValues(&arr[j], &arr[j+1]);
}
 
void PrintArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5};
   
    /*Working on Implementing Input*/
/*
    int NumOfEnties = 0;
    int ArrOfNum[100];
    int ArrSize = sizeof(ArrOfNum)/sizeof(ArrOfNum[0]);

    printf("Please enter the numbers you wish to sort\n");

    while ((scanf("%d", &ArrOfNum[NumOfEnties]) == 1) && (NumOfEnties > 100) && (!isdigit(ArrOfNum[NumOfEnties])))
    {
        NumOfEnties++;
    }


    for(int i=0; i<ArrSize; i++)
    {
        scanf("%d", &ArrOfNum[i]);
        NumOfEnties++;
        if(!isdigit(ArrOfNum[i])) break;
    }

    int ArrToSort[NumOfEnties];

    for(int i=0; i<NumOfEnties; i++)
        ArrToSort[i] = ArrOfNum[i];
    
    for(int i=0; i<NumOfEnties; i++)
        printf("%d, ", ArrToSort[i]);
*/
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    printf("\n\nSorted array: \n");
    PrintArray(arr, n);
    return 0;
}