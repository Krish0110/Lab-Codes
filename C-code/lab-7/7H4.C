/*to find sum from 1 t0 n*/
#include<stdio.h>
#include<conio.h>
long int sum(int n)
{
if(n==1)
return(1);
else
return(n+sum(n-1));
}
void main()
{
int n;
long int s;
clrscr();
printf("Enter the value of n:");
scanf("%d",&n);
if (n>0)
s=sum(n);
else
printf("\n Enter positive value of n");
printf("\n The sum from 1 to %d is %ld",n,s);
getch();
}