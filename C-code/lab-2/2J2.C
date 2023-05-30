/*evaluate the expression*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x,y,a,b,c,p,q,r,k;
clrscr();
printf("Enter the value of x,y,a,b,c,p and q:");
scanf("%f%f%f%f%f%f%f",&x,&y,&a,&b,&c,&p,&q);
k=((2*x)+y)/(p-q);
r=pow((a+b),k) +c -100;
printf("\n The value of given expression is %f.",r);
getch();
}