#include <stdio.h>


char dec_to_bin(char dec_num)
{
    char bin_num;

    bin_num ^= bin_num;

    if(dec_num % 2)
    {
       bin_num = (bin_num | 1);
       dec_num -= 1;
       dec_num /= 2;
    }
    else
    {
        dec_num /= 2;
    }

    return bin_num;
}



int main()
{
    
    int val = 0x3;

    char bin_num = dec_to_bin(val);

    //for(int i=0; i<sizeof(char); i++)
        printf("%d", bin_num);


    return 0;
}