#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define GCD(x)(y) 

int GCD(int x, int y){
    int greatestNumber = x;
    if(y > x){
        greatestNumber = y;
    }

    for(int i=0; i<greatestNumber; i++){
        if((y % i == 0) && (x % i ==0))
            return i;
    }
    return -1;  //unable to find GCD
}

int main(){
    int x = 8;
    int y = 16;
    GCD(x, y);

}