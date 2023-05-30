/*to find range*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,l,s,r,num[100],n;
clrscr();
printf("Enter the size of an array n :");
scanf("%d",&n);
printf("\n ENter the members of an array :");
for(i=0;i<n;i++)
{
printf("\n num[%d]=",i);
scanf("%d",&num[i]);
}
l=num[0];
s=num[0];
for(i=1;i<n;i++)
{
if(num[i]>l)
l=num[i];
if(num[i]<s)
s=num[i];
}
r=l-s;
printf("\n largest=%d\t smallest =%d",l,s);
printf("\n The range of array is %d",r);
getch();
}
