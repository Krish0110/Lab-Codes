/*programe to evaluate value of given expression*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
float x,y,v;
clrscr();
printf("Enter value of x and y:");
scanf("%f%f",&x,&y);
v=pow(x,3)+pow(y,2)-(100/x);
printf("\n The value of expression is %f",v);
getch();
}