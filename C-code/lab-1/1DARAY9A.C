/*to find medan*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,num[100];
float me;
clrscr();
printf("\n Enter the size of an array n:");
scanf("%d",&n);
printf("\n Enter the member of an array:");
for(i=0;i<n;i++)
{
printf("\n num[%d]=",i);
scanf("%d",&num[i]);
}
if(n%2==0)
me=(float)(num[n/2-1]+num[n/2])/2;
else
me=(float)num[(n+1)/2-1];
printf("\n median =%f",me);
getch();
}