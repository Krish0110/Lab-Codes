/* to add row element of 2d to get 1d*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,m,n,a[10][10],b[10];
clrscr();
printf("Enter the row m and column n of array:");
scanf("%d%d",&m,&n);
printf("\n Enter the element of an array:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\n a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
b[i]=0;
for(j=0;j<n;j++)
{
b[i]=b[i]+a[i][j];
}
}
printf("\n The new one dimensional array is :");
for(i=0;i<m;i++)
{
printf("\n b[%d]=%d",i,b[i]);
}
getch();
}