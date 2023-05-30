/*to create a funtion to find sum of digits in number*/
#include<stdio.h>
#include<conio.h>
void sumOfDigits(int);
void main()
{
int n;
clrscr();
printf("Enter an integer number n:");
scanf("%d",&n);
sumOfDigits(n);
getch();
}
void sumOfDigits(int n)
{
int sum=0,rem;
while(n!=0)
{
rem=n%10;
sum+=rem;
n=n/10;
}
printf("\nThe sum of digits in given number is %d",sum);
}