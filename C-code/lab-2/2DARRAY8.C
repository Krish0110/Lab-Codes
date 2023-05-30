/*to create an array with given element*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,x;
float a[4][4];
clrscr();
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
x=-(i+j);
a[i][j]=pow(3,x);
}
}
printf("The elements of an array is:");
for(i=0;i<4;i++)
{
printf("\n");
for(j=0;j<4;j++)
printf("%f\t",a[i][j]);
}
getch();
}
