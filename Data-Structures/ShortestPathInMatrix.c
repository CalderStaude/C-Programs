#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROW 10
#define COL 10

bool isSafe(int x, int y){
    if(x > 0 && x < COL && y > 0 && y < ROW)
        return true;
    else
        return false;
}


int main(){

    int mat[ROW][COL]  = {{1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
                        {1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
                        {1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
                        {0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
                        {1, 1, 1, 0, 1, 1, 1, 0, 1, 0 },
                        {1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },
                        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
                        {1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
                        {1, 1, 0, 0, 0, 0, 1, 0, 0, 1 }};

        // int mat[ROW][COL]  = {{1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        //                 {1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
        //                 {1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
        //                 {0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
        //                 {1, 1, 1, 0, 1, 1, 1, 0, 1, 0 },
        //                 {1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },
        //                 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        //                 {1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        //                 {1, 1, 0, 0, 0, 0, 1, 0, 0, 1 }};

        // int mat[ROW][COL]  = {{1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        //                 {1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
        //                 {1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
        //                 {0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
        //                 {1, 1, 1, 0, 1, 1, 1, 0, 1, 0 },
        //                 {1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },
        //                 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        //                 {1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        //                 {1, 1, 0, 0, 0, 0, 1, 0, 0, 1 }};
//Source = {0, 0};
//Destination = {3, 4};

int x = 0;
int y = 0;
int boundry = 1;

for(int i=0; i<boundry; i++){
    //look up
    if(x != 0){
        if(mat[x-1][y] == 1){
            x -=1; 

        }
    }

}

return 0;
}

//11