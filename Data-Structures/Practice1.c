#include <stdio.h>
int main()
{
int i;
for ( i=0; i<5; i++ )
{
   int i = 10;
   printf ( "%d ", i );
   i++;
}
return 0;
}



/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int qudratic_formaula(int a, int b, int c, int* result1, int* result2)
{
  int temp = b*b - 4*a*c;

  if(temp > 0)
  {
    *result1 = (-b + sqrt(temp))/(2*a);
    *result2 = (-b - sqrt(temp))/(2*a);

    return result1, result2;;
  }
  else
  {
    printf("The values entered lead to an imaginary number!");

      exit(0);
  }
  
}

int main()
{
  int result1;
  int result2;

  int a = 7;
  int b = 5;
  int c = 6;

  qudratic_formaula(a, b, c, &result1, &result2);

  printf("The result of the operation is: %d, %d", result1, result2);

  return 0;
}
*/


/*
#include <stdio.h>

#define MULTIPLY(a, b) a*b  //Macro that runs with pre-processor
#define MULTIPLY2(a, b) (a)*(b)  //thus one adds before multiplication
#define Concatinations(a, b) a##b  //this puts two items together

#define PRINT(i, limit) while (i < limit) \ 
                        { \
                            printf("GeeksQuiz "); \
                            i++; \
                        }

static inline int square(int x) { return x*x; }  //inline function

//change to word
#define get(a) #a


int main()
{
    char A[] = "Hello";
    char B[] = "World";

    int a = 12;
    int b = 34;

   // printf("%s", get(hello));

       printf("Current File :%s\n", __FILE__ );
   printf("Current Date :%s\n", __DATE__ );
   printf("Current Time :%s\n", __TIME__ );
   printf("Line Number :%d\n", __LINE__ );

    //printf("%d", Concatinations(32, 43));
    //printf("%d", Concatinations(77, 99));
    // The macro is expanded as 2 + 3 * 3 + 5, not as 5*8
  // printf("%d", MULTIPLY2(2+3, 3+5));
    return 0;
}

*/