#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>



jmp_buf SAVEBUF;

int EXCEPTION_VALUE = 0;

#define TRY if((EXCEPTION_VALUE = setjmp(SAVEBUF)) == 0)
#define CATCH(NUM) else if(EXCEPTION_VALUE == NUM)
#define CATCHALL else
#define THROW(NUM) longjmp(SAVEBUF, NUM)

double compute_avg(double *values, size_t length)
{
    THROW(5);
    double sum = 0;
    
    if(length <= 0)
    {
        //THROW(5);
        //longjmp(SAVEBUF, 1);    //send state and return 1
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


    TRY    //changes to 1 to skip block
    {
        double avg = compute_avg(darr, arrlength);
        printf("Average = %lf\n", avg);
    }
    CATCH(5) 
    {
        printf("I got error num 5\n");   
    }
    CATCHALL
    {
        printf("ERROR - INVALID INPUT.\n");
    }
    

   return 0;
}