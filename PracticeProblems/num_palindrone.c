#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool check_if_palindrone(int number){

    int numberOfDigits = log10(number);


    int n = number;
    int remainder = 0;
    int reversed = 0;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if(number == reversed){
        return true;
    } 
    return false;
}

void print_result(bool palendrom, int number){
    if(palendrom){
        printf("The number: %d\tis\t palendrom\n", number);
    } else {
        printf("The number: %d\tis NOT\t palendrom\n", number);
    }
    
}

int main(){
    int number = 34543;
    print_result(check_if_palindrone(number), number);
    number = 1234;
    print_result(check_if_palindrone(number), number);
    number = 12321;
    print_result(check_if_palindrone(number), number);
    number = 1010101;
    print_result(check_if_palindrone(number), number);
    number = 101010;
    print_result(check_if_palindrone(number), number);

}