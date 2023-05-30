/*program to arrange the elements in ascending order*/
#include<stdio.h>
#include<conio.h>
void sort(int n,int num[]);
void main()
{
int n,i,num[100];
clrscr();
printf("Enter the elements of an array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("\n num[%d]=",i);
  scanf("%d",&num[i]);
}
sort(n,num);
printf("\n The sorted array in ascending order is :");
for(i=0;i<n;i++)
printf("\n num[%d]=%d",i,num[i]);
getch();
}
void sort (int n,int num[])
{
 int i,j,temp;
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
  if(num[j] < num[i])
  {
   temp=num[i];
   num[i]=num[j];
   num[j]=temp;
  }
 }
}
}