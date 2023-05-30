/*evaluate expression*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
float r;
clrscr();
printf("Enter the value of A and B :");
scanf("%d%d",&a,&b);
r=(float)a/b;
printf("\n The value of expression is %f.",r);
getch();
}