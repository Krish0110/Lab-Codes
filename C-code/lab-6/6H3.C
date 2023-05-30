#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("Enter number of rows n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=i;j++)
{
if(i==1)
printf("N\t");
else if(i==2)
printf("E\t");
else if(i==3)
printf("P\t");
else if(i==4)
printf("A\t");
else
printf("L\t");
}
}
getch();
}
