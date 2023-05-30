/*to increase the power of each member by three*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,num[100],a[100];
clrscr();
printf("Enter the size of an array n:");
scanf("%d",&n);
printf("\n Enter the members of an array:");
for(i=0;i<n;i++)
{
printf("\n num[%d]=",i);
scanf("%d",&num[i]);
}
printf("\n The array with each member power raise to 3 is:");
for(i=0;i<n;i++)
{
 a[i]=pow(num[i],3);
 printf("\n a[%d]=%d",i,a[i]);
}
getch();
}
