/*to add corresponding elements of two array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[100],b[100],s[100];
clrscr();
printf("Enter the value of size of array n:");
scanf("%d",&n);
printf("\n Enter the elements of array a[100]:");
for(i=0;i<n;i++)
{
 printf("\n a[%d]=",i);
 scanf("%d",&a[i]);
}
printf("\n Enter the elements of array b[100]:");
for(i=0;i<n;i++)
{
 printf("\n b[%d]=",i);
 scanf("%d",&b[i]);
}
printf("\n The sum of corresponding elements of two array is :");
for(i=0;i<n;i++)
{
 s[i]=a[i]+b[i];
 printf("\n s[%d]=%d",i,s[i]);
 }
getch();
}