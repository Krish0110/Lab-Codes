/*program to swap values of two variables*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t;
clrscr();
printf("Enter the value of variable a and b:");
scanf("%d%d",&a,&b);
printf("\n The value of a and b before swapping is a=%d ,b=%d",a,b);
t=a;
a=b;
b=t;
printf("\n The new value of a and b is a=%d and b=%d." ,a,b);
getch();
}