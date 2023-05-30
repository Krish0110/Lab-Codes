/*to arrange the elements in descending order*/
#include<stdio.h>
#include<conio.h>
void sort(int n,int num[])
{
int i,j,temp;
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(num[j] > num[i])
  {
   temp=num[i];
   num[i]=num[j];
   num[j]=temp;
  }
 }
}
}
void main()
{
int i,n,num[100];
clrscr();
printf("Enter the size of an array n:");
scanf("%d",&n);
printf("\n Enter the elements of an array :");
for(i=0;i<n;i++)
{
printf("\n num[%d]=",i);
scanf("%d",&num[i]);
}
sort(n,num);
printf("\n The sorted array in descending order is :");
for(i=0;i<n;i++)
printf("\n num[%d]=%d",i,num[i]);
getch();
}