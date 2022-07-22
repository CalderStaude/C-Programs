
// C Program to demonstrate that C treats array parameters
// as pointers
#include <stdio.h>
 
void findSum1(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum = sum + arr[i];
        arr[i] = 0;}
    printf("The sum of the array is: %d\n", sum);
    int arr2[] = { 1232 };
    arr[0] = *arr2;
    
}
 
void findSum2(int* arr)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum = sum + arr[i];
    printf("\nThe sum of the array is: %d \n", sum);
}

void printout(int* arr){
    for(int i=0; i<(5); i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
 

void make100(int* val){

    val[1] = 100;

}

void foo(int* val){

    val[1] = 100;

}

void bar(int **val2){
    *val2 = 101;
    val2[1] = 103;
    for(int i=0; i<5; i++){
        if(i == 2)
            *val2 = 104;
        *val2++;
    }
}

void barr(int *val3){
        for(int i=0; i<5; i++){
            *val3++ = i;
    }
}


// Driver code
int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    printout(arr);
    make100(arr);
    printout(arr);
    bar(arr);
    printout(arr);
    barr(arr);
    printout(arr);

    return 0;
}