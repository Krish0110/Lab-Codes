/*to raise power of element by 5*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,a[10][10],m,n;
float p[10][10];
clrscr();
printf("Enter the number of rows m and column n in an array:");
scanf("%d%d",&m,&n);
printf("\n Enter the members of array:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\n a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
}
printf("\n The new array formed is :");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
p[i][j]=pow(a[i][j],5);
printf("%f \t",p[i][j]);
}
}
getch();
}