#include <stdio.h>
#include <stdlib.h>
  
#define BUFFER_SIZE 1000


void readFile(FILE * fPtr);

int main()
{
    FILE *fp = fopen("TextFile.txt", "w");
    if (fp == NULL)
    {
        puts("Couldn't open file");
        exit(0);
    }
    else
    {
        fputs("Hello world\nthis is cool! ", fp);
        puts("Done");
        fclose(fp);
    }

    fp = freopen("TextFile.txt", "r", fp);




    /* Print file contents after appending string */
    printf("\nSuccessfully appended data to file. \n");
    printf("Changed file contents:\n\n");
    readFile(fp);


    /* Done with file, hence close file. */
    fclose(fp);

    return 0;
}

void readFile(FILE * fPtr)
{
    char ch;

    do 
    {
        ch = fgetc(fPtr);

        putchar(ch);

    } while (ch != EOF);
}