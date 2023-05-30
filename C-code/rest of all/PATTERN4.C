#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter number of rows n:\n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=n;j>=i;j--)
printf("%d\t",j);
printf("\n");
}
getch();
}