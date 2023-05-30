/*to add corresponding elements of two array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,m,n,a[10][10],b[10][10],s[10][10];
clrscr();
printf("Enter the row m and column n:");
scanf("%d%d",&m,&n);
printf("\n Enter the member of an array a[][]:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\n a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
}
printf("\n Enter the member of array b[][]:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\n b[%d][%d]=",i,j);
scanf("%d",&b[i][j]);
}
}
printf(" The sum of corresponding element of two array is :");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
s[i][j]=a[i][j]+b[i][j];
printf("%d \t",s[i][j]);
}
}
getch();
}