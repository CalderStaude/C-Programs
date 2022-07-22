#include <stdio.h>

#ifndef VERBOSE
    #define VERBOSE 1
#endif

//#define VerbosePrint(fmt, ...) \
//            do { if (VERBOSE) printf(fmt, __VA_ARGS__); } while (0)




/*  canReach takes an array and array size and determerines if the values in the array
    are suffient to travel to the end of the array */
int canReach(int Arr[], int Nn)
{

   int A[] = {3, 0, 1, 2, 0, 0, 1};
    int N = 7;
    //conter to track avalible units that one may jump to make it accross the array
    int unitsToJump = 0;
    for (int i = 0; i < N && unitsToJump >= 0; i++)
    {
        //if(VERBOSE){ printf("UnitsToJump: %d, Arr Val: %d\n", unitsToJump, A[i]); }
        unitsToJump += A[i];
        unitsToJump--;
        if (i == N - 1 && unitsToJump >= 0)
        {
            unitsToJump += A[i+1];
            unitsToJump--;
            if(unitsToJump >=)
        }

    }
    return 0;
}

int main(){

    int arr[] = {1, 1, 2, 0, 2, 0, 1, 1, 1};
    int size = sizeof(arr)/sizeof(0[arr]);    

  printf("can it work %d", canReach(arr, 9));

    return 0;
}