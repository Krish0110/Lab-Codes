#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,num[3][3];
clrscr();
printf("Enter the members of an array:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\n num[%d][%d]=",i,j);
scanf("%d",&num[i][j]);
}
}
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",num[i][j]);
}
getch();
}