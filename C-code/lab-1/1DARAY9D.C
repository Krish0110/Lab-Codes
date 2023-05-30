/*to find srandard deviation*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,s=0,x=0,num[100];
float v,a,sd;
clrscr();
printf("Enter the size of an array n :");
scanf("%d",&n);
printf("\n Enter the member of an array:");
for(i=0;i<n;i++)
{
printf("\n num[%d]=",i);
scanf("%d",&num[i]);
}
for(i=0;i<n;i++)
{
s=s+num[i];
x=x+pow(num[i],2);
}
a=(float)s/n;
v=(float)x/n - a*a;
sd=pow(v,0.5);
printf("\n The standard deviation of array is %f",sd);
getch();
}