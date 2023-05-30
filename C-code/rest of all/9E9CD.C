#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,a[100];
float s=0,x=0,sd,v;
clrscr();
printf("Enter the size of an array n:");
scanf("%d",&n);
printf("\n Enter the member of an array:");
for(i=0;i<n;i++)
{
printf("\n a[%d]=",i);
scanf("%d",(a+i));
}
for(i=0;i<n;i++)
{
s+=*(a+i);
x+=pow(*(a+i),2);
}
v=x/n-pow((s/n),2);
sd=pow(v,0.5);
printf("\n The variance is %f and standard deviation is %f",v,sd);
getch();
}


