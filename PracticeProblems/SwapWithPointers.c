#include <stdio.h>

void SwapVar(int *a, int *b, int *c){

    int tmp = *a;
    *a = *b;
    *b = *c;
    *c = tmp;

}

int main(){

    int a = 1;
    int b = 2;
    int c = 3;

    printf("%d | %d | %d\n", a, b, c);
    SwapVar(&a, &b, &c);
    printf("%d | %d | %d\n", a, b, c);
    SwapVar(&a, &b, &c);
    printf("%d | %d | %d\n", a, b, c);
    SwapVar(&a, &b, &c);
    printf("%d | %d | %d\n", a, b, c);

}