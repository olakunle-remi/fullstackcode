//program to introduce scanf function

#include<stdio.h>
#include<conio.h>

void  main()
{
    int a,b;
    float c;
    printf("enter the value of the A\n");
    scanf("%d",&a);
    printf("enter the value of B\n");
    scanf("%d",&b);
    printf("enter the value of C\n");
    scanf("%f",&c);
    printf("\n\nA:%d\nB:%d\nC:%f",a,b,c);
}