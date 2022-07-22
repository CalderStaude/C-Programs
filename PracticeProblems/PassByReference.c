/*
 * This program aims to show how objects may be passed
 * by reference rather than by value.  This allows multiple
 * objects to be returned from a function.
 */

#include <stdio.h>

void printIntArr(int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (i == arrSize - 1)
        {
            printf("%d\n", arr[i]);
        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }
}

void printCharArr(char *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (i == arrSize - 1)
        {
            printf("%c\n", arr[i]);
        }
        else
        {
            printf("%c, ", arr[i]);
        }
    }
}

/* Change an index of an array.  This shows how pointer and array pointers are similar.*/ 
void ChangeElementItem(int* arr, int arrSize, int value, int index){
    
    if(index <= arrSize)
        arr[index] = value;
}



/*This array takes two arrays and modifies the values to illistrate passing by reference*/
void updateArr(int *intArrPtr, int sizeOfIntArr, char *charArrPtr, int sizeOfCharArr)
{
    printIntArr(intArrPtr, sizeOfIntArr);
    printCharArr(charArrPtr, sizeOfCharArr);

    ChangeElementItem(intArrPtr, sizeOfIntArr, 14, 3);



    printIntArr(intArrPtr, sizeOfIntArr);
}

int main()
{
    // int arrInt[] = {1, 2, 3, 4, 5, 6, 7};
    // int arrIntSize = sizeof(arrInt)/sizeof(0[arrInt]);
    // printf("Int Arr Size: %d\n", arrIntSize);

    // char arrChar[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};

    // int arrCharSize = sizeof(arrChar)/sizeof(0[arrChar]);
    // printf("Int Arr Size: %d\n", arrCharSize);

    // updateArr(arrInt, arrIntSize, arrChar, arrCharSize);

    // printf("Hello World!\n");

    int i1 = 5;
    int i2 = 10;

    int* p1 = &i1;
    int** pp1 = &p1;
    int* p2 = &i2;

    printf("i1: %d\n", i1); 
    printf("i1 with p1: %d\n", *p1); 
    printf("i1 with pp1: %d\n", **pp1);
    printf("i1 addr of i1: %d\n", &i1); 
    printf("i1 addr of i1 with p1: %d\n", p1);
    printf("i1 addr of i1 with pp1: %d\n", *pp1);
    printf("addr of p1 with p1: %d\n", &p1);
    printf("addr of p1 with pp1: %d\n", pp1);


     



    return 0;
}