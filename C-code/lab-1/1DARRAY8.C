/*to count armstrong element in array*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
unsigned int count(unsigned int n,unsigned int num[]);
void main()
{
unsigned int i,n,num[100],c;
clrscr();
printf("Enter the size of an array n:");
scanf("%d",&n);
printf("\n Enter elements of an array:");
for(i=0;i<n;i++)
{
printf("\n num[%d]=",i);
scanf("%d",&num[i]);
}
c=count(n,num);
printf("\n The count of armstrong number in an array is %d",c);
getch();
}
unsigned int count(unsigned int n,unsigned int num[])
{
unsigned int i,x,y,d,rem,sum,a,counting=0;
for(i=0;i<n;i++)
{
x=num[i];
y=num[i];
d=0;
sum=0;
while(y!=0)
{
y=y/10;
d=d+1;
}
while(x!=0)
{
rem=x%10;
a=pow(rem,d);
sum=sum+a;
x=x/10;
}
if(sum==num[i])
counting+=1;
}
return(counting);
}


