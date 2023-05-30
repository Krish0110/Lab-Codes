/*to create function to find factorial*/
#include<stdio.h>
#include<conio.h>
long int fact(int);
void main()
{
int n;
long int factorial;
clrscr();
printf("Enter positive integer number n:");
scanf("%d",&n);
if(n<0)
printf("\nEnter positive integer");
else
factorial=fact(n);
printf("\nThe factorial of %d is %ld",n,factorial);
getch();
}
long int fact(int n)
{
if(n==0)
return(1);
else
return(n*fact(n-1));
}
