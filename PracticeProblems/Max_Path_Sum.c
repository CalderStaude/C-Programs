#include <stdio.h>

struct Potition_Largest
{
    int position;
    int largest;
};

struct MaxPath_Path
{
    int MaxPath;
    int* Path;
};


const int M = 3;
const int N = 3;

struct Potition_Largest FindLargest(int* array){

    int largest = *array;
    //Find biggest element in n time.  *Could be optimised for larger matricies. to n/(loop partition)
    int position = 0;
    for(int i=0; i<M; i++){
        if(largest < *array){
            largest = *array;
            position = i;
        }
        array++;
    }

    struct Potition_Largest ReturnValues;
    ReturnValues.largest = largest;
    ReturnValues.position = position;

    return ReturnValues;
}

int KeepInBounds(int position)
{
    if(position >= M){
        return position-1;
    } else if (position <= 0){
        return position + 1;
    } else {
        return position;
    }
}

int* CreateSubArray(int arr[M][N], int position, int row){
    int *sub_array;   //Set search width to 3 - only look down left down below and down right

    for(int i= -1; i<3; i++){
        int index = i +1;
        int col = KeepInBounds(position) + i;
        int value = arr[0][0];
        *sub_array++ = value;
    }
    return sub_array;
}

int* best_path(int arr[M][N])
{
    struct Potition_Largest Pos_largest = FindLargest(arr[M]);
    printf("index: %d, value: %d", Pos_largest.position, Pos_largest.largest);
    int iterator = 0;
    while(iterator < M){
      
        //int subArray[3] = {0, 0, 0};
        int* subArray = CreateSubArray(arr, Pos_largest.position, iterator);
        Pos_largest = FindLargest(subArray);
        printf("index: %d, value: %d", Pos_largest.position, Pos_largest.largest);
        iterator++;
        int* subArray2 = CreateSubArray(arr, Pos_largest.position, iterator);
        Pos_largest = FindLargest(subArray2);
        printf("index: %d, value: %d", Pos_largest.position, Pos_largest.largest);
        iterator++;
        int* subArray3 = CreateSubArray(arr, Pos_largest.position, iterator);
        Pos_largest = FindLargest(subArray3);
        printf("index: %d, value: %d", Pos_largest.position, Pos_largest.largest);
        iterator++;
    }
    int *ans = 0;
    return ans;
}

void print_matrix(int arr[M][N])
{
    printf("!!%d\n", arr[0][0]);
    int test = arr[0][0];
        printf("!!%d\n", test);
    int i, j;
    for (i = 0; i < M; i++){
      for (j = 0; j < N; j++){
        printf("%d ", arr[i][j]);
        }
    printf("\n");
    }
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    //print_matrix(arr);
    best_path(arr);
    return 0;
}