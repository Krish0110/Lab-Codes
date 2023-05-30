#include<stdio.h>
#include<conio.h>
void main()
{
float p,c,a,b,t;
int g,h;
clrscr();
printf("enter price of a pen and a copy:");
scanf("%f%f",&p,&c);
printf("\n enter the number of pens and copies:");
scanf("%d%d",&g,&h);
a=(g*p)-(0.1*g*p);
b=(h*c)-(0.1*h*c);
printf("the cost of %d pens=Rs %f and %d copies =Rs %f with discount",g,a,h,b);
t=a+b;
printf("total cost of both with discount is Rs %f",t);
getch();
}