#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[100],b[100],s[100];
clrscr();
printf("Enter the size of an array:");
scanf("%d",&n);
printf("\n Enter the element of first array a[]:");
for(i=0;i<n;i++)
{
printf("\n a[%d]=",i);
scanf("%d",(a+i));
}
printf("\n Enter the element of second array b[]:");
for(i=0;i<n;i++)
{
printf("\n b[%d]=",i);
scanf("%d",(b+i));
}
printf("\n The sum of two arrays is :");
for(i=0;i<n;i++)
{
*(s+i)=*(a+i)+*(b+i);
printf("\n s[%d]=%d",i,*(s+i));
}
getch();
}