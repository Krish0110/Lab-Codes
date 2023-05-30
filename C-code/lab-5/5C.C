/*to display sum of even number */
#include<stdio.h>
#include<conio.h>
void main()
{
unsigned int n,i,sum=0;
clrscr();
printf("Enter the positive number:");
scanf("%u",&n);
for (i=1;i<=n;i++)
  {
  if(i%2==0)
  sum=sum+i;
  }
printf("\n The sum of even number from 1 to n is %u",sum);
getch();
}