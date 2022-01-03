/**
 * @file CLI.c
 * @author Calder Staude
 * @version 0.1
 * @date 2021-12-27 
 */

#include <stdio.h>


int main()
{
    printf("Hello World!\n");
    
    char myArr[10];
    scanf("%s", &myArr);

    printf("\nYour entry:\n%s\n\n", myArr);

    printf("Listing items:\n");
    
    int size = sizeof(myArr)/sizeof(myArr[0]);

    for(int i=0; i<size; i++)
    {
        printf("Element [%d]: %c\n", i, myArr[i]);
    }
    return 0;
}
