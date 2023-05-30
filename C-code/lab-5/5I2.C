/*to check armstrong*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,sum=0,rem,x,y,count=0;
clrscr();
printf("Enter the value of positive integer:");
scanf("%d",&n);
x=n;
y=n;
while(n!=0)
{
n=n/10;
count=count+1;
}
while(y!=0)
{
rem=y%10;
sum=sum+pow(rem,count);
y=y/10;
}
if(sum==x)
printf("\n The number is armstrong.");
else
printf("\n The number is not armstrong.");
getch();
}