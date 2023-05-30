#include<stdio.h>
#include<conio.h>
void process(float a[10],float *sum,float *diff)
{
int i,plarge,psmall;
float large,small;
large=*(a+0);
small=*(a+0);
for(i=0;i<10;i++)
{
if(*(a+i)>=large)
{
large=*(a+i);
plarge=i;
}
if(*(a+i)<=small)
{
small=*(a+i);
psmall=i;
}
}
*sum=large+small;
*diff=large-small;
printf("\n the large element is %f and small element is %f",large,small);
printf("\n The position of large is %d and small is %d",plarge,psmall);
}
void main()
{
int i;
float a[100],sum,diff;
clrscr();
printf("Enter the element of an array:");
for(i=0;i<10;i++)
{
printf("\n a[%d]=",i);
scanf("%f",(a+i));
}
process(a,&sum,&diff);
printf("\n The sum is %f and difference is %f",sum,diff);
getch();
}