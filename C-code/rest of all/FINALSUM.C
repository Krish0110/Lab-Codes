#include<stdio.h>
#include<conio.h>
void main()
{
int sum,rem;
long int n;
clrscr();
printf("enter the value of n:");
scanf("%ld",&n);
do
{
  sum=0;
   do
   {
     rem=n%10;
     sum=sum+rem;
     n=n/10;
   }while(n!=0);
   n=sum;
 }while(sum/10!=0);
 printf("\n sum=%d",sum);
getch();
}