#include <stdio.h>
#include <limits.h>

#define MAT_SIZE 4

struct matrix_index{
    int col;
    int row;
    int element;
};

int main(){



int mat[MAT_SIZE][MAT_SIZE] =   {{16, 28, 60, 64},
                {22, 41, 63, 91},
                {27, 50, 87, 93},
                {36, 78, 87, 94 }};

int index_to_find = 3;

struct matrix_index col_index;
col_index.col = 0;
col_index.row = 0;
col_index.element = INT_MAX;

struct matrix_index row_index;
row_index.col = 0;
row_index.row = 0;
row_index.element = INT_MAX;

    int row = 0;
    int col = 0;
    int nextRowVal = 0;
    int nextColVal = 0;

while(col < MAT_SIZE){

    col_index.col = col;
    col_index.row = row;
    col_index.element = mat[col][row];

    while(row < MAT_SIZE && col_index.element > row_index.element){

    }

}


    //loop col

    //loop row


    while(col<MAT_SIZE){

        if(col < MAT_SIZE-1){
            nextRowVal = mat[0][row+1];
            col_index.col = col;
            col_index.row = row;
            col_index.element = mat[col][row];
        } else {
            nextRowVal = INT_MAX;
        }
        
        while(row<MAT_SIZE){
        if(mat[col][row] > nextRowVal){
            //nextColVal = mat[col][row];
            row_index.row = row;
            row_index.col = col;
            row_index.element = mat[row][col];   
            break;
        } else {
            printf("%d, ", mat[col][row]);
        }
        row++;
        }
        
        printf("%d, ", mat[col][row]);

        col++;
        
    }



}