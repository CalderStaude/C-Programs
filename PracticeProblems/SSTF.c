//Shortest seek time first

#include <stdio.h>
#include <stdlib.h>

#define ARRAYSIZE(arr) (sizeof(arr)/sizeof(0[arr]))

int compare(const void *, const void *);  /* macro is automatically */          

int Split_LeftAndRightSubArray(int arr[], int Head_Position, int arr_size);

void printArr(int arr[], int arr_size);

void shortestSeekTimeFirst(int arr[], int Head_Position, int arr_size);

int main(){

    int proc[] = { 176, 79, 34, 60, 92, 11, 41, 114 };
    int arr_size = ARRAYSIZE(proc);
    int head_position = 50;

    shortestSeekTimeFirst(proc, head_position, arr_size);
                                                                  
                                               
   return 0;   
}

int compare( const void* a, const void* b)
{
    // int int_a = * ( (int*) a );
     //int int_b = * ( (int*) b );

    return *((int*)a)-*((int*)b);
}


//split array in left path and right path
int Split_LeftAndRightSubArray(int arr[], int Head_Position, int arr_size){
    int i = 0;
    for(; i<arr_size; i++){
        if(Head_Position < arr[i]){
            return i;
        }
    }
    return arr_size-1;
}


void shortestSeekTimeFirst(int arr[], int Head_Position, int arr_size){
    //int arr[] = { 176, 79, 34, 60, 92, 11, 41, 114 };

    int seek_path[arr_size];
    int path_index = 1;
    seek_path[0] = Head_Position;
    //sort array from smallest to largest value
    qsort(arr, arr_size, sizeof(int), compare);
    
    int chng_dir_idx = Split_LeftAndRightSubArray(arr, Head_Position, arr_size);

    if((Head_Position - arr[0]) > (arr[arr_size-1] - Head_Position))
    {
        //start by going right
        for(int i=chng_dir_idx; i<arr_size; i++){
            seek_path[path_index] = arr[i];
            path_index++;
        } 
        for(int i=0; i<chng_dir_idx; i++){
            seek_path[path_index] = arr[i];
            path_index++;
        }

    } else {
        //start by going left
          for(int i=chng_dir_idx-1; i>0; i--){
            seek_path[path_index] = arr[i];
            path_index++;
        }
        for(int i=chng_dir_idx; i<arr_size; i++){
            seek_path[path_index] = arr[i];
            path_index++;
        } 
    }

    printArr(seek_path, arr_size);

    return;
}

void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    return;
}

