#include <stdio.h>
#include <stdarg.h>

// int min(int num,...) {

//    va_list valist;
//    int min, i;

//    /* initialize valist for num number of arguments */
//    va_start(valist, num);
//     min = va_arg(valist, int);
//    /* access all the arguments assigned to valist */
//    for (i = 0; i < num; i++) {
//         int val =  va_arg(valist, int);
//       if(min > val){
//         min = val; 
//       }
//    }
	
//    /* clean memory reserved for valist */
//    va_end(valist);

//    return min;
// }

int minTwo(int x, int y){
    if(x > y) return y;
    else return x;
}

int minThree(int x, int y, int z){
    return minTwo(z, minTwo(x, y));
}

void printNum(int);



int main(){
    int N = 5, K = 3;

    int arr[3][5] = {{1, 3, 5, 7, 9},
                            {0, 2, 4, 6, 8},
                            {2, 3, 5, 7, 11}};

    int tmp = arr[0][0];

    int min[N][N];



  for(int i=0; i<N; i++){
        min[i][] = arr[0][0];
        
        for(int j=0; j<N; j++){
            if(currentmin += arr[][] < currentmin_lastelement){
                add
            }

             

        }        
    }

/*   
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
           for(int k=0; k<N; k++){
                int newmin = minThree(arr[0][i], arr[1][j], arr[2][k]);
                if(minrange > newmin){
                    minrange = newmin;
                }
            } 
        }        
    }
    printf("Found min!!! %d\n", minrange);

*/
    return 0;
}


void printNum(int num){
    printf("%d\n", num);
}