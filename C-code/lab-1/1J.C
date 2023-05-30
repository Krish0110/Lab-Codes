#include<stdio.h>
#include<conio.h>
void main()
{
float p,c,a,b,t;
clrscr();
printf("Enter the price of a pen and a copy:");
scanf("%f%f",&p,&c);
a=(2*p)-(0.1*2*p);
b=(5*c)-(0.1*5*c);
printf("\n The price of 2 pen is Rs %f and 5 copies is Rs %f",a,b);
t=a+b;
printf("\n The total price of both is %f",t);
getch();
}