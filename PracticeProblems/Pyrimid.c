#include <stdio.h>

void print_num_pyrimid(int base){
    int current_number = 1;
    int current_number_loop = 1;;
    int middle = base / 2;
    int counter = 1;
    for (int k = 0; k < (base / 2 + 1); k++)
    {
        for (int i = 0; i < base; i++)
        {
            if (i == middle)
            {
                for (int j = 0; j < counter; j++)
                {
                    printf("%d\t", current_number + j);
                    i++;
                }
                current_number++;
                middle -= 1;
                counter += 2;
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

void print_pyramid(int base)
{
    int middle = base / 2;
    int counter = 1;
    for (int k = 0; k < (base / 2 + 1); k++)
    {
        for (int i = 0; i < base; i++)
        {
            if (i == middle)
            {
                for (int j = 0; j < counter; j++)
                {
                    printf("*");
                }
                middle -= 1;
                counter += 2;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    print_num_pyrimid(9);
}