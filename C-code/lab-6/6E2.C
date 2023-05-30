/*program to print 2,4,6,8.....2n*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter the value of n:\n");
scanf("%d",&n);
for(i=2;i<=2*n;i=i+2)
printf("%d,",i);
getch();
}
