#include <stdio.h>
#include <string.h>

int sumOfArray(int arr[], int arrsize){
    int sum = 0;
    for(int i=0; i<arrsize; i++){
        sum += arr[i];
    }
    return sum;
}

int remove_one_element(int arr[], int arrsize, int remove_item_flag){


}

int main(){

    int arr[] = {1, 4, 20, 3, 10, 5};
    int arrsize = sizeof(arr)/sizeof(0[arr]);
    int helloArr = 10;

   //printf("Array Size: %d\n", arrsize);
    int subArr[arrsize];

    for(int i=0; i<arrsize; i++){
        subArr[i] = 0;
    }


    int sum = 33;
    int sub_arr_index = 0;
    int sum_of_arr = 0;
    int remove_item_flag = 0;

    for(int i=0; i<arrsize; i++){
        sum_of_arr = sumOfArray(subArr, arrsize); 
        if(sum_of_arr < sum){
            sub_arr_index++;
            remove_item_flag = 0;
        } else if (sum_of_arr > sum)
        {
            subArr[remove_item_flag] = 0;
            remove_item_flag++;
            if(remove_item_flag == arrsize){i++;}
            i--;
            //sub_arr_index = 0;

        }else{
            printf("Success! \n");
            
        }
    }

}



