#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MUL(a, b) ((a) * (b)) 

int binaryToDecimal(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}

 long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}




void MyFun()
{
    long decimalnum = 523;
    int quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
 
    // display integer into character
    for (i = j; i >= 0; i--)
            printf("%c", hexadecimalnum[i]);
}





void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}
 

void code()
{
    int i = 0b10010111101;
    int cnt = 0;

    while(i > 0)
    {
        if((i & 1) == 1)
            cnt++;
        i = i >> 1;
    }

    printf("%d", cnt);

}


void morecode()
{
    int* p = (int*)malloc(sizeof(int));
    printf("Malloc P val: %d\n", *p);
    *p = 5;
    printf("Malloc P val: %d\n", *p);

    

    int* u = (int*)calloc(1, sizeof(int));
    printf("calloc P val: %d\n", *u);
    *u = 10;
    printf("calloc P val: %d\n", *u);

    printf("%d", MUL(10, 12));

    free(p);
    free(u);

    return;
}

void evenMoreCode()
{
    int val = 0b111;

    int x = val & 0b100;

    printf("%d", x);

    return;
}


int main()
{
    evenMoreCode();
    

   // MyFun();


    //bin(53);

    //int MyArr[6] = {0, 0, 0, 0, 0};

   // morecode();



    /*
    int decimalnum = 53;
    int dec = decimalToBinary(decimalnum);
    int bin = binaryToDecimal(11010101);
    printf("%ld ", dec);
    printf("%ld ", bin);
*/
    return 0;
}

/*
int *decToBin(int n)
{
    int *binaryNum[32];
    int i =0;
    if(n>0)
    {
        binaryNum[i++] = n % 2;
    }
    return binaryNum;
}



// function to convert decimal to binary
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n /= 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

int *fun()
{
    int arr[] = {1, 2, 3, 4, 10};

    return &arr;
}

// Driver program to test above function
int main()
{
    int *p;
    p = fun();

    while(p != NULL)
    {
        printf("%d ", *p);
        p++;
    }


    return 0;
}

*/