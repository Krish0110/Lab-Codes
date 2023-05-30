/*to find varaiance*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,s=0,x=0,num[100];
float a,v;
clrscr();
printf("Enter the size of an array n:");
scanf("%d",&n);
printf("\n Enter the elements of an array :");
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
v=(float)x/n-a*a;
printf("\n The varance of an array is %f",v);
getch();
}

