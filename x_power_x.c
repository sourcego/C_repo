/* This program input x and print x^x */
#include <stdio.h>
#include <math.h>
int main()
{   int x; 
    long int result;

    printf("Enter a base number: ");
    scanf("%d", &x);
    // calculates the power
    result = pow(x,x); 
    printf("%.1ld^%.1ld = %.2ld", x, x, result);// %ld refers to printing long int datatype
    return 0;
}
