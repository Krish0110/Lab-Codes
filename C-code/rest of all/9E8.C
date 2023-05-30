#include<stdio.h>
#include<conio.h>
#include<math.h>
unsigned int process(unsigned int a[10],unsigned int n)
{
int i,count=0,rem,b,sum=0,x,y,d=0;
for(i=0;i<n;i++)
{
x=*(a+i);
y=*(a+i);
d=0;
sum=0;
while(y!=0)
{
y=y/10;
d++;
}
while(x!=0)
{
rem=x%10;
b=pow(rem,d);
sum+=b;
x=x/10;
}
if(sum==*(a+i))
count++;
}
return(count);
}
void main()
{
unsigned int i,n,c,a[10];
clrscr();
printf("Enter the size of an array:");
scanf("%u",&n);
printf("\n Enter the element of an array:");
for(i=0;i<n;i++)
{
printf("\n a[%u]=",i);
scanf("%d",(a+i));
}
c=process(a,n);
printf("\n The count of armstrong element is %u",c);
getch();
}
