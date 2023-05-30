/*program to check whether number is positive negative or zero*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter an integer number:");
scanf("%d",&a);
if(a>0)
printf("\n The integer number is positive.");
else if(a==0 )
printf("\n The integer number is equal to zero.");
else
printf("\n The integer number is negative.");
getch();
}