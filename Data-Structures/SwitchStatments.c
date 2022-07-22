#include<stdio.h>  
#include<string.h>

typedef enum
{
    FirstState,
    SecondState,
    ThirdState
} States;


int main()
{
    int i = 1;
    int j = 2;

    States MyStates = ThirdState;


    switch(MyStates)
    {
        case FirstState: 
            printf("I is greater");
        break;
        case SecondState: 
            printf("J is greater");
        break;
        case ThirdState: 
            printf("they are equal");
        break;      
        default:
            printf("Error has occured!");
        break;
    }

   int arr[] = { 1, 5, 15, 20 };
 
    for (int i = 0; i < 4; i++)
    {
        switch (arr[i])
        {
        case 1 ... 6:
            printf("%d in range 1 to 6\n", arr[i]);
            break;
        case 19 ... 20:
            printf("%d in range 19 to 20\n", arr[i]);
            break;
        default:
            printf("%d not in range\n", arr[i]);
            break;
        }
    }


    return 0;
}

