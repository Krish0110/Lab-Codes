/*program to compute its factorial*/
#include<stdio.h>
#include<conio.h>
void main()
{
float n;
int i,fact=1;
clrscr();
printf("Enter the integer number :");
scanf("%f",&n);
if(n-int(n)==0)
{
  if(n>=0)
  {
  for(i=1;i<=n;i++)
  {
  fact=fact*i;
  }
  printf("\n The factorial of integer is %d",fact);
  }
  else
  printf("\n Enter the positive integer.");
}
else
printf("\n Enter the valid integer.");
getch();
}