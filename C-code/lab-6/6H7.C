#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,m;
clrscr();
printf("Enter the number of rows n:");
scanf("%d",&n);
m=2*n-1;
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=m;j++)
{
if((i-j)>=1)
printf("\t");
else if((i+j)>2*n)
printf("\t");
else
printf("*\t");
}
}
getch();
}
