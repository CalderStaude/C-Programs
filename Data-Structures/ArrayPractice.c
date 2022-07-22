#include <stdio.h>

#define ARRSIZE(x)  (sizeof(x) / sizeof((x)[0]))

void OutputArr(int *ptr_item, int ArrSize)
{
    for(int x=0; x<ArrSize; x++)
    {
        printf("%d, ", *ptr_item);
        ptr_item++;
    }
}

int BubbleSort(int MyArr[], int ArrSize)
{
    int temp;

    for(int j=0; j<ArrSize; j++)
    for(int i=0; i<ArrSize; i++)
    {
        if(MyArr[i] < MyArr[i+1])
        {
            temp = MyArr[i];
            MyArr[i] = MyArr[i+1];
            MyArr[i+1] = temp;
        }
    }
   
    for(int k =0; k<ArrSize; k++)
    {
        printf("%d, ", MyArr[k]);
    }

    //OutputArr(MyArr, sizeof(MyArr)/sizeof(MyArr[0]));

    return 0;
}


void ReverseSameArr(int arr[], int str, int end)
{
    int size = end;
    int temp;
    while(str < end)
    {
        temp = arr[str];
        arr[str] = arr[end];
        arr[end] = temp;
        str++;
        end--;
    }

  //  printArray(arr, size);
}


void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
 
  printf("\n");
}

void rvereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
} 

void ReverseArr(int *ptr_item, int ArrSize)
{
    int MyNewArr[ArrSize];
    int ArrRev[ArrSize];

    printf("Arr before reversal\n");
    for(int i=0; i<ArrSize; i++)
    {
        MyNewArr[i] = ++*ptr_item;
        printf("%d, ", *ptr_item);
    }
    printf("\nArr after reversal\n");
    for(int i=(ArrSize); i>0; i--)
    {
        ArrRev[ArrSize-i-1] = MyNewArr[i];
    }

    for(int i=0; i<ArrSize; i++)
    {
        printf("%d, ", ArrRev[i]);
    }



 
    
}


void RemoveDuplicates(int Arr[], int Arrsize)
{
    int NewArr[Arrsize];   //this has fixed data size - try using stack or something. 

   // for(int i=0; i<Arrsize; i++)
    //{
      //  NewArr[i] = Arr[i];
    //}

    int itemcnt = 0;
    int MatchFlag = 0;
    for(int i=0; i<Arrsize; i++)
    {
        for(int j=i+1; j< Arrsize; j++)
        {
            if(Arr[i] == Arr[j])
            {
               MatchFlag = 1;
            }
        }

        if(MatchFlag == 0)
        {
            NewArr[itemcnt] = Arr[i];  
            itemcnt++;          
        }
        else
        {
            MatchFlag = 0;
        }
    }

    int NewSize = sizeof(NewArr)/sizeof(NewArr[0]);
    
    printArray(NewArr, itemcnt);
}

void Permutations(int Arr11[], int Arr21[])
{
    int Arr1[] = {1, 2, 3, 4};
    int Arr2[] = {1, 2, 2, 1};

    int size1 = sizeof(Arr1)/sizeof(Arr1[0]);
    int size2 = sizeof(Arr2)/sizeof(Arr2[0]);

    if(size2 != size1){printf("The arrays are not permutations of eachother"); return;}

    if(size2 > size1){printf("send the arr in other order!"); return;}

    //find how many times char occours then look for same occurence in other string
    
    int Arr1_Char_Duplicate = 1;
    int Arr2_Char_Duplicate = 1;

    for(int i=0; i<size1; i++)
    {
        for(int j=i; j< size1; j++)
        {
            if(Arr1[i] == Arr1[j])
            {
               Arr1_Char_Duplicate++;
            }
        }
    }    

    for(int i=0; i<size1; i++)
    {
        for(int j=i; j< size1; j++)
        {
            if(Arr2[i] == Arr2[j])
            {
               Arr2_Char_Duplicate++;
            }
        }
    } 
        
    if(Arr2_Char_Duplicate != Arr1_Char_Duplicate)
    {
        printf("Arr DO NOT Match!");
    }
    else
    {
        printf("Arr Match");
    }
}

void ReverseArray(int *ArrPtr, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", ArrPtr[i]);
    }
    printf("\nArray Reversed!\n");

    for(int i=0; i<size; i++)
    {
        printf("%d ", ArrPtr[size-i-1]);
    }

}


int main()
{
    int MyArr[] = {4, 3, 2, 3, 3, 8, 3, 1, 3, 23};
    int size = sizeof(MyArr)/sizeof(MyArr[0]);

    ReverseArray(MyArr, size);
    //RemoveDuplicates(MyArr, size);


    int Arr1[] = {1, 2, 3, 4};
    int Arr2[] = {4, 3, 2, 1};

   // Permutations(Arr1, Arr2);

    //ReverseArr(MyArr, size);

    //ReverseSameArr(MyArr, 0, size-1);
    //BubbleSort(MyArr, sizeof(MyArr)/sizeof(MyArr[0]));

    //OutputArr(MyArr, sizeof(MyArr)/sizeof(MyArr[0]));

    return 0;
}