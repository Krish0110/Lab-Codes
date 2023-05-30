#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,m;
clrscr();
printf("Enter the number of rows n :");
scanf("%d",&n);
m=(n+1)/2;
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=m;j++)
{
if((i+j)<=m&& i<=m)
printf("\t");
else if((i-j)>=m&& i>=m)
printf("\t");
else
printf("%d\t",j);
}
}
getch();
}
