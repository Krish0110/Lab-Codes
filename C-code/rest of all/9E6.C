#include<stdio.h>
#include<conio.h>
void ascending(int a[10],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(*(a+j)<*(a+i))
{
temp=*(a+i);
*(a+i)=*(a+j);
*(a+j)=temp;
}
}
}
}
void descending(int a[10],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(*(a+j)>*(a+i))
{
temp=*(a+i);
*(a+i)=*(a+j);
*(a+j)=temp;
}
}
}
}
void main()
{
int i,n,a[10];
clrscr();
printf("Enter the size of an array:");
scanf("%d",&n);
printf("\n Enter the member of an araay :");
for(i=0;i<n;i++)
{
printf("\n a[%d]=",i);
scanf("%d",(a+i));
}
ascending(a,n);
printf("\n The array in ascending order is :");
for(i=0;i<n;i++)
{
printf("\n a[%d]=%d",i,*(a+i));
}
descending(a,n);
printf("\n The array in descending order is :");
for(i=0;i<n;i++)
{
printf("\n a[%d]=%d",i,*(a+i));
}
getch();
}


