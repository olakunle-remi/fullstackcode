// sum, sub, mul, div, example

#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10, b =5, c, r;
    float d;
    
    printf("The value of A is %d", a);
    printf("\n The value of B is %d", b);
    c = a+b;
    printf("\nAddition is %d", c);
    c = a-b;
    printf("\nSubtraction is %d", c);
    c = a/b;
    printf("\nMultiplication is %d", a*b);
    printf("\nDivision is %.4f", d);
    r = a%b;
    printf("\nRemainder is %d", r);
    
}