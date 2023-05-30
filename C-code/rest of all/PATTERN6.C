#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter number of rows n:\n");
scanf("%d",&n);
for(i=1
;i<=n;i++)
{
for(j=0;j<=n;j++)
{
if((i-j)>=1)
printf(" \t");
else
printf("%d\t",j);
}
printf("\n");
}
getch();
}
