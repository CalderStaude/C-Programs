/**
 * C program to edit data to a text file
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFFER_SIZE 1000    //for searching what file to use
#define DATA_SIZE 1000      //Size for data

void ReadFile();
void AppendFile();
void OverwriteFile();
void CreateFile();
void DeleteFile();
int CheckIfFileExists(FILE * fPtr);

typedef enum 
{
    READ,
    APPEND,
    OVERWRITE,
    CREATE,
    DELETE
} ACTION;

int main()
{
    printf("Welcome to text file editing would you like to:\n"
            "0 - Read a text file\n"
            "1 - Append to a text file\n"
            "2 - Overwrite a text file\n"
            "3 - Create a text file\n"
            "4 - Delete a text file\n"
            "SELECTION: ");
    
    int UserEntry = 0;
    scanf("%d", &UserEntry);

    if (UserEntry > 4)
    {
        printf("Invald entry");
        exit(1);
    }

    ACTION Action = UserEntry;

    switch (Action)
    {
    case READ:
        ReadFile();
        break;
    case APPEND:
        AppendFile();
        break;
    case OVERWRITE:
        OverwriteFile();
        break;
    case CREATE:
        CreateFile();
        break;
    case DELETE:
        DeleteFile();
        break;
    }

    printf("Closing Program");

    return 0;
}


void ReadFile()
{
    //FILE *fPtr;
    char UseDefaultPath;
    char FileName[100];

    /* Input file path */
    printf("Please enter the file name you want without the \".txt\"\n\n");
    scanf("%s", &FileName);

    /* Open File */
    FILE *fPtr = fopen(FileName, "r");
    CheckIfFileExists(fPtr);

    /* Print Contents */
    char ch;

    do 
    {
        ch = fgetc(fPtr);

        putchar(ch);

    } while (ch != EOF);

    fclose(fPtr);
    return;
}

int CheckIfFileExists(FILE * fPtr)
{
    if (fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open the file\n");
        exit(EXIT_FAILURE);
    }
}

void AppendFile()
{
    FILE *fp = fopen("TextFile.txt", "a");

    CheckIfFileExists(fp);
    
    fputs("appending file now", fp);
 
    fclose(fp);
    
    printf("Appended text to file");

    return;
}

void OverwriteFile()
{
    printf("Please enter the file name you want without the \".txt\"");
    char FileName[30];
    scanf("%29s", FileName);

    //FILE *fp = fopen("TextFile.txt", "w");
    FILE *fp = fopen(FileName, "w");

    CheckIfFileExists(fp);
    
    fputs("File Overwrite\nNew thing ", fp);
 
    fclose(fp);
    
    printf("Finished Writting");

    return;
}

void CreateFile()
{
    printf("Called Create File");
    return;
    /* Variable to store user content */
    char data[DATA_SIZE];

    /* File pointer to hold reference to our file */
    FILE * fPtr;

    printf("Please enter the file name you want with the \".txt\"");
    char FileName[30];
    scanf("%29s", FileName);

    /* fopen() return NULL if last operation was unsuccessful */
    fPtr = fopen(FileName, "w");
    CheckIfFileExists(fPtr);

    /* Input contents from user to store in file */
    printf("Enter contents to store in file: \n");
    fgets(data, DATA_SIZE, stdin);
    fputs(data, fPtr);

    fclose(fPtr);

    printf("\nCreated File\n");
    return;
}

void DeleteFile()
{
    if (remove("test.txt") == 0)
        printf("Deleted successfully");
    else
        printf("Unable to delete the file");
    printf("DELETE FILE CALLED!");
}
