/*program to show palindrome*/
#include<stdio.h>
#include<conio.h>
void main()
{
int x,n,rem,sum=0;
clrscr();
printf("Enter the positive integer number:");
scanf("%d",&n);
x=n;
if(n>0)
{
while (n!=0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
if(sum==x)
printf("\n The number is palindrome.");
else
printf("\n The number is not palindome.");
}
else
printf("\n Enter valid integer.");
getch();
}
