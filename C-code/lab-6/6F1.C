/*program to find sum of 2+4+6+8+.....2n */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("Enter the value of n:");
scanf("%d",&n);
for(i=2;i<=2*n;i=i+2)
{
sum=sum+i;
}
printf("\n The value of series upto n term is %d",sum);
getch();
}
