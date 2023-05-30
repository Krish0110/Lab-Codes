#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,a[10],p[10];
clrscr();
printf("Enter the size of an array:");
scanf("%d",&n);
printf("\n Enter the member of an array:");
for(i=0;i<n;i++)
{
printf("\n a[%d]=",i);
scanf("%d",(a+i));
}
printf("\n The new array formed is :");
for(i=0;i<n;i++)
{
*(p+i)=pow(*(a+i),3);
printf("\n p[%d]=%d",i,*(p+i));
}
getch();
}
