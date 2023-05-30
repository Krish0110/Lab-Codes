/*function to check prime number*/
#include<stdio.h>
#include<conio.h>
void check_prime(int);
void main()
{
int n;
clrscr();
printf("Enter a positive integer:");
scanf("%d",&n);
check_prime(n);
getch();
}
void check_prime(int n)
{
int i;
if(n>0)
{
for(i=2;i<n;i++)
{
if(n%i==0)
break;
}
if(i==n)
printf("\n The given number is prime number");
else
printf("\n The number is not prime");
}
else
printf("\n Enter positive integer");
}