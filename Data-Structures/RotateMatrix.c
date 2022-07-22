#include <stdio.h>
#include <stdlib.h>

#define R 4
#define C 4


void retate_matrix(int m, int n, int mat[R][C])
{
    int row = 0, col = 0;
    int prev, curr;
 
    /*
    row - Starting row index
    m - ending row index
    col - starting column index
    n - ending column index
    i - iterator
    */
    while (row < m && col < n)
    {
 
        if (row + 1 == m || col + 1 == n)
            break;
 
        // Store the first element of next row, this
        // element will replace first element of current
        // row
        prev = mat[row + 1][col];
 
        /* Move elements of first row from the remaining rows */
        for (int i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
 
        /* Move elements of last column from the remaining columns */
        for (int i = row; i < m; i++)
        {
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
        }
        n--;
 
        /* Move elements of last row from the remaining rows */
        if (row < m)
        {
            for (int i = n-1; i >= col; i--)
            {
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
            }
        }
        m--;
 
        /* Move elements of first column from the remaining rows */
        if (col < n)
        {
            for (int i = m-1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
 
    // Print rotated matrix
    for (int i=0; i<R; i++)
    {
        for (int j=0; j<C; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

void shifted(int *mat, int size)
{
    int *rotated[size * size];
    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (flag == 0)
            {
                // printf("%d\t", mat[size*size-1]);
             //   rotated[i * size + j] = (int)mat[size * size - 1];
                flag++;
            }
            else
            {
                // printf("%d\t", mat[(i*size + j)-1]);
            //    rotated[i * size + j] = (int)mat[(i * size + j) - 1];
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
      //      mat[i * size + j] = rotated[i * size + j];
        }
    }

    // mat = rotated;

    // return rotated;
}

void printM(int *mat, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", mat[i * size + j]);
        }
        printf("\n");
    }
}

int main()
{
     int a[R][C] = { {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16} };
 
    // Test Case 2
    /* int a[R][C] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
                    };
    */ 
   retate_matrix(R, C, a);
   printf("\n");
    retate_matrix(R, C, a);
       printf("\n");

    retate_matrix(R, C, a);

    return 0;
}

// 0   1   2   3
// 4   5   6   7
// 8   9   10  11
// 12  13  14  15

// 4   0   1   2
// 8   9   5   3
// 12  10  6   7
// 13  14  15  11