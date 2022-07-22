#include <stdio.h>

void print_array(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr1[] = {1, 2, 3, 5, 12, 23, 34, 45, 50};
    int arr2[] = {1, 2, 3, 4, 6, 8, 13, 25, 26, 35, 46, 51};

    int arr1_size = sizeof(arr1) / sizeof(int);
    int arr2_size = sizeof(arr2) / sizeof(int);

    printf("Initial arrrays:\n");
    print_array(arr1, arr1_size);
    print_array(arr2, arr2_size);

    int max;
    int min;
    if (arr1_size > arr2_size)
    {
        max = arr1_size;
        min = arr2_size;
    }
    else
    {
        max = arr2_size;
        min = arr1_size;
    }

    int big[arr1_size + arr2_size];
    int big_size = arr1_size + arr2_size;
    int counter = 0;

    int arr1_cnt = 0;
    int arr2_cnt = 0;

    int test = arr2[11];

    for (int i = 0; i < big_size; i++)
    {
        int val1 = arr1[arr1_cnt];
        int val2 = arr2[arr2_cnt];
        if (arr1[arr1_cnt] < arr2[arr2_cnt] && (arr1_cnt < arr1_size))
       {
            if(arr1_cnt < arr1_size){
            big[arr1_cnt + arr2_cnt] = arr1[arr1_cnt];
            arr1_cnt++;
            } 
        }
        else
        {
            if(arr2_cnt < arr2_size){
            big[arr1_cnt + arr2_cnt] = arr2[arr2_cnt];
            arr2_cnt++;
            } else {
             if(arr1_cnt < arr1_size){
            big[arr1_cnt + arr2_cnt] = arr1[arr1_cnt];
            arr1_cnt++;
            }        
            }

        }
    }

    /*
        for(int i=0; i<max; i++){
            for(int j=0; j<min; j++){
                if(arr1[i] > arr2[j]){
                    big[counter] = arr1[i];
                    counter++;
                } else {
                    big[counter] = arr2[j];
                    counter++;
                }


                //To be continued
            }
        }
        */
    printf("Sorted Array:\n");
    print_array(big, big_size);
}