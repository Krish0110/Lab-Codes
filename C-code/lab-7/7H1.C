/*to find factoril*/
#include<stdio.h>
#include<conio.h>
long int fact(int n)
{
if(n==0)
return(1);
else
return(n*fact(n-1));
}
void main()
{
int n;
long int f;
clrscr();
printf("Enter an positive integer n :");
scanf("%d",&n);
if(n>=0)
f=fact(n);
else
printf("\n Please Enter positive integer number ");
printf("\n the factorial of given number is %ld",f);
getch();
}