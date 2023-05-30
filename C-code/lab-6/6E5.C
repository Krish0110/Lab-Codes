/* program to print 1,1/3,1/5,.......1/(2n-1) */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
float term;
clrscr();
printf("Enter value of n: \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
term=(float)1/(2*i-1);
printf("%f\t",term);
}
getch();
}

