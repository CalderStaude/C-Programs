#include <stdio.h>
#include <stdlib.h>

#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

void fizzbuzz()
{
    for(int i=1; i<101; i++)
    {
        if((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FizzBuzz\n");
        }
        else if(i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if(i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
}
/*
int *ArrSum Add_Two_Num(int *Arr1, int sizeOfArr1, int *Arr2, int sizeOfArr2)
{
    int size_of_sum = sizeOfArr1 + sizeOfArr1 + 1;
    int SumArr[size_of_sum];
    for(int i=0; i<size_of_sum; i++){SumArr[i] = 0;}

    //int longest = max(sizeOfArr1, sizeOfArr2);

    int carry = 0;
    for(int i =0; i < sizeOfArr1; i++)
    {
        SumArr[i] = Arr1[i] + Arr2[i] + carry;
        carry = 0;
        if(SumArr[i] >= 10)
        {
            carry = 1;
            SumArr[i] = SumArr[i]%10;
        }
    }
    

    return *SumArr;
}
*/

void sumTwoArrays()
{
    int Arr1[] = {5, 6, 4};
    int sizeOfArr1 = sizeof(Arr1)/sizeof(Arr1[0]);
    int Arr2[] = {2, 4, 3};
    int sizeOfArr2 = sizeof(Arr2)/sizeof(Arr2[0]);

    int size_of_sum = sizeOfArr1 + sizeOfArr1 + 1;
    int SumArr[size_of_sum];
    for(int i=0; i<size_of_sum; i++){SumArr[i] = 0;}

    //int longest = max(sizeOfArr1, sizeOfArr2);

    int carry = 0;
    for(int i =0; i < sizeOfArr1; i++)
    {
        SumArr[i] = Arr1[i] + Arr2[i] + carry;
        carry = 0;
        if(SumArr[i] >= 10)
        {
            carry = 1;
            SumArr[i] = SumArr[i]%10;
        }
    }

    for(int i = 0; i<sizeOfArr1; i++)
    {
        printf("%d ", SumArr[i]);
    }
}


int main()
{
    int Arr1[] = {1, 5, 7, 8, 9};
    int Arr2[] = {4, 6, 10, 11, 19};
    int Arr3[] = {1, 8, 17, 18, 21};
    
    int Arr[] = {Arr1, Arr2, Arr3};



    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ", Arr[i,j]);
        }
        printf("\n");
    }


    return 0;
}