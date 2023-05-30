/*to add diagonal element */
#include<stdio.h>
#include<conio.h>
int add(int num[3][3],int row,int column)
{
int i,j,sum=0;
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
if(i==j)
sum+=num[i][j];
}
}
return(sum);
}
void main()
{
int i,m,n,j,s,num[3][3];
clrscr();
printf("Enter the number of rows and column in array:");
scanf("%d%d",&m,&n);
printf("\n Enter the element of an array:");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
printf("\n num[%d][%d]=",i,j);
scanf("%d",&num[i][j]);
}
}
s=add(num,m,n);
printf("\n The sum of diagonal elements of array is %d",s);
getch();
}