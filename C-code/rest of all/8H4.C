#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=i;j++)
{
if(j==1)
printf("A\t");
else if(j==2)
{
if(i%2==0)
printf("B\t");
else
printf("b\t");
}
else if(j==3)
printf("C\t");
else if(j==4)
{
if(i%2==0)
printf("D\t");
else
printf("d\t");
}
else
printf("E\t");
}
}
getch();
}