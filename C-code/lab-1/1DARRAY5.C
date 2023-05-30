/*to find the highest and lowest element of an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,highest,lowest,a[5];
clrscr();
printf("Enter the element of an array a:");
for(i=0;i<5;i++)
{
printf("\n a[%d]=",i);
scanf("%d",&a[i]);
}
highest=a[0];
lowest=a[0];
for(i=1;i<5;i++)
{
if(a[i]>highest)
highest=a[i];
if(a[i]<lowest)
lowest=a[i];
}
printf("\n The highest number is %d and lowest number is %d",highest,lowest);
getch();
}