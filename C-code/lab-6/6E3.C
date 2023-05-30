/*program to print 1,2,5,10..... */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,term;
clrscr();
printf("Enter the value of n:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
term=i*i+1;
printf("%d\t",term);
}
getch();
}
