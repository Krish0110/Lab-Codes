#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter the number of rows n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=n;j++)
{
if((i+j)<=5)
printf("#\t");
else
printf("*\t");
}
}
getch();
}
