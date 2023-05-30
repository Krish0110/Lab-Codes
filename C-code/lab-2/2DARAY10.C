/*to multiply two matrix*/
#include<stdio.h>
#include<conio.h>
void readMatrix(float a[][10],float b[][10],float m,int n,int p,int q)
{
int i,j;
printf("\n Enter the element of first array a[][]:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\n a[%d][%d]=",i,j);
scanf("%f",&a[i][j]);
}
}
printf("\n Enter the element of second array b[][]:");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("\n b[%d][%d]=",i,j);
scanf("%f",&b[i][j]);
}
}
}
void processMatrix(float a[][10],float b[][10],float c[][10],int m,int n,int q)
{
int i,j,k;
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
}
void showMatrix(float c[][10],int m,int q)
{
int i,j;
printf("\n The product of two matrx is :");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<q;j++)
{
printf("%f \t",c[i][j]);
}
}
}
void main()
{
int m,n,p,q;
float a[10][10],b[10][10],c[10][10];
clrscr();
printf("Enter the row m and column n of first array:");
scanf("%d%d",&m,&n);
printf("\n Enter the row p and column q of second array:");
scanf("%d%d",&p,&q);
readMatrix(a,b,m,n,p,q);
if(n==p)
processMatrix(a,b,c,m,n,q);
showMatrix(c,m,q);
getch();
}

