#include<stdio.h>
#include<stdio.h>
#include<math.h>
void main()
{
int num,sum=0,x,rem,a;
clrscr();
printf("enter the number:");
scanf("%d",&num);
x=num;
while(num!=0)
{
rem=num%10;
a=pow(rem,3);
sum=sum+a;
num=num/10;
}
printf("\n sum=%d",sum);
  if(sum==x)
   printf("\n the number is armstrong");
   else
   printf("\n the number is not armstrong");
getch();
}