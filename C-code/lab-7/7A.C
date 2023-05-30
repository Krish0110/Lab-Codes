/*to create function add to add two numbers*/
#include<stdio.h>
#include<conio.h>
float add(int,float);
void main()
{
int a;
float b,sum;
clrscr();
printf("Enter the value of a and b:");
scanf("%d%f",&a,&b);
sum=add(a,b);
printf("\n The sum of two numbers is %f",sum);
getch();
}
float add(int x,float y)
{
float s;
s=x+y;
return(s);
}
