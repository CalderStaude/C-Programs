#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex add_complex(struct complex complex_num1, struct complex complex_num2)
{
    struct complex complex_sum;
    complex_sum.real = complex_num1.real + complex_num2.real;
    complex_sum.imag = complex_num1.imag + complex_num2.imag;
    return complex_sum;
}

struct complex mul_complex(struct complex complex_num1, struct complex complex_num2)
{
struct complex complex_sum;
    complex_sum.real = complex_num1.real * complex_num2.real - complex_num1.imag * complex_num2.imag;
    complex_sum.imag = 0;
    return complex_sum;
}



int main(){

    struct complex complex_num1;
    complex_num1.real = 12;
    complex_num1.imag = 32;

    struct complex complex_num2;
    complex_num2.real = 1;
    complex_num2.imag = 2;

    struct complex sum;
    sum = add_complex(complex_num1, complex_num2);

    printf("sum: real part = %f, img part = %f\n", sum.real, sum.imag);

    struct complex product;
    product = mul_complex(complex_num1, complex_num2);
    printf("mul: real part = %f, img part = %f\n", product.real, product.imag);


    return 0;
}