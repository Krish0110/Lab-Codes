/*to check the prime number*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count=0;
clrscr();
printf("\n Enter the positive integer number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
count=count++;
}
if(count==2)
printf("\n The number is prime.");
else
printf("\n The number is not prime.");
getch();
}