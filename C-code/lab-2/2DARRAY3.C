/*to add elements of 2d array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,sum=0,num[3][3];
clrscr();
printf("Enter the elements of an array:");
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
for(j=0;j<3;j++)
{
if(num[i][j]%7==0 && num[i][j]%5 != 0)
sum+=num[i][j];
}
}
printf("\n The sum of elements of an array divisible by 7 but not by 5 is %d",sum);
getch();
}