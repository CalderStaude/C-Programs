#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf SAVEBUF;

double compute_avg(double *values, size_t length)
{
    double sum = 0;
    
    if(length <= 0)
    {
        longjmp(SAVEBUF, 1);    //send state and return 1
    }


    for(int i = 0; i<length; i++)
    {
        sum += values[i];
    }

    return sum / (double)length;
}

int main(int argc, char ** argv)
{

    int arrlength = argc - 1;
    double *darr = malloc(sizeof(double) * arrlength);

    for(int i = 1; i<argc; i++){
        darr[i-1] = atof(argv[i]);
    }

    if(setjmp(SAVEBUF) == 0)    //changes to 1 to skip block
    {
        double avg = compute_avg(darr, arrlength);
        printf("Average = %lf\n", avg);
    }
    else
    {
        printf("ERROR - INVALID INPUT.\n");
    }
}