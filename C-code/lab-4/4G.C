/*program to evaluate function*/
#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("Enter the value of x:");
scanf("%d",&x);
if(x<=0)
{
y=0;
printf("\n The value of function is %d",y);
}
else if(0<x<=10)
{
y=x*(x-10)*(x-15);
printf("\n The value of function is %d",y);
}
else if(10<x<=15)
{
y=(x-10)*(x-15)*(x-20);
printf("\n The value of the function is %d",y);
}
else if(15<x<=20)
{
y=(x-15)*(x-20)*(x-30);
printf("\n The value of function is %d",y);
}
else if(20<x<=30)
{
y=(x-20)*(x-30)*(x-40);
printf("\n The value of function is %d",y);
}
else
{
printf("\n The value of function is zero.");
}
getch();
}