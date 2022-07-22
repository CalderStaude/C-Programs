#include <stdlib.h>
  



// C program to demonstrate pointer to pointer

void use(int* a, int* b, int* restrict c)
{
    *a += *c;

    *b += *c; 

    int **prt2;
    prt2 = &c;
    printf("\nhello world\n");
    printf("%d\n", **prt2);
    printf("%d\n", &prt2);

}

int main()
{
    int var = 789;
  
    int A = 10;
    int *p;
    p = &A;

    int **pr;
    pr = &p;


    printf("A: %d\n", A);
    printf("*p: %d\n", *p);
    printf("p: %d\n", p);
    printf("&A: %d\n", &A);
    printf("pr: %d\n", pr);
    printf("*pr: %d\n", *pr);
    printf("**pr: %d\n", **pr);
    printf("&pr: %d\n", &pr);
    printf("=========\n");
    **pr = 11;                  //change a var with a higher pointer
   
    printf("A: %d\n", A);
    printf("*p: %d\n", *p);
    printf("=========\n");
    int B = 20;
    *pr = &B;               //user a pointer to change where a pointer points
    printf("p: %d\n", p);
    printf("*p: %d\n", *p);
    printf("*pr: %d\n", *pr);
    printf("=========\n");




//structs and pointers are confusing!


    // pointer for var
    int *ptr2;
  
    // double pointer for ptr2
    int **ptr1;
  
    // storing address of var in ptr2
    ptr2 = &var;
      
    // Storing address of ptr2 in ptr1
    ptr1 = &ptr2;
    


    // Displaying value of var using
    // both single and double pointers
    //printf("Value of var = %d\n", var );
 //   printf("Value of var using single pointer = %d\n", *ptr2 );
  //  printf("Value of var using double pointer = %d\n", **ptr1);
    
  return 0;
} 



/*
#include<stdio.h>
  
int *fun()
{
    // x is local variable and goes out of
    // scope after an execution of fun() is
    // over.
    int x = 5;
  
    return &x;
}

void use(int* a, int* b, int* restrict c)
{
    *a += *c;
 
    // Since c is restrict, compiler will
    // not reload value at address c in
    // its assembly code. Therefore generated
    // assembly code is optimized
    *b += *c; 

    *c = 6;

    int *prt = &c;

    *prt = 5;



}

  
// Driver Code
int main()
{
    int a = 50, b = 60, c = 70;
    use(&a, &b, &c);
    printf("%d %d %d", a, b, c);

    /*
    int you = 0;
    int *p = fun();
    fflush(stdin);
  
    // p points to something which is not
    // valid anymore

    printf("test123");
    printf("%d", *p);

    *p = NULL;
    printf("%d", *p);
    printf("test13323");
   // &you = p;
    */
  
/*
    return 0;
}

*/