#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[100];
float md;
clrscr();
printf("Enter the size of an array n:");
scanf("%d",&n);
printf("\n Enter the element of an array:");
for(i=0;i<n;i++)
{
printf("\n a[%d]=",i);
scanf("%d",(a+i));
}
if(n%2==0)
md=(*(a+n/2)+*(a+(n/2-1)))/2;
else
md=*(a+((n+1)/2-1));
printf("\n The median of array is %f",md);
getch();
}


