#include <stdio.h>
#include <math.h>
#include <string.h>

int converter(int dec){

    int binSize = log2(dec) +1;
    char arr[binSize];
    
    for(int i = 0; i<binSize; i++){
        arr[i] = 0;
    }

    int tmp = dec;
    int counter = 0;
    while (tmp > 0)
    {
        arr[counter] = tmp % 2;
        printf("%d", tmp % 2);
        tmp %= 2;
        counter++;
    }


    return arr;    
}

int main(){

    int tmp = 213;
    
    while(tmp>0){

    printf("%d", (tmp%2));
    tmp = tmp >> 1;
    }
    /*
    int dec = 232;
    int binSize = log2(dec) +1;
    int bin[binSize];
    converter(dec);
    
    for(int i = 0; i<binSize; i++){
        //printf("%d ", bin[i]);
    }
    */
}