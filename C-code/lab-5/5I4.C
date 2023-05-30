/*to check twin prime*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,j,i,x,count=0,n=0;
clrscr();
printf("Enter two positive integer numbers a and b :");
scanf("%d%d",&a,&b);
x=abs(a-b);
for(i=1;i<=a;i++)
{
if(a%i==0)
count=count++;
}
for(j=1;j<=b;j++)
{
if(b%j==0)
n=n++;
}
if(count==2&&n==2&&x==2)
printf("\n The numbers are twin prime.");
else
printf("\n The numbers are not twin prime.");
getch();
}

