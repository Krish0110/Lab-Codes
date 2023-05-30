/*to find sum of elements of array divisible by 10 but not by 15*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,num[5],sum=0;
clrscr();
printf("Enter the menbers of an array:");
for(i=0;i<5;i++)
{
  printf("\n num[%d]=",i);
  scanf("%d",&num[i]);
}
for(i=0;i<5;i++)
{
if(num[i]%10==0 && num[i]%15!=0)
 sum+=num[i];
}
printf("\nThe sum of elements of an array that are divisible by 10 but not by 15 is %d",sum);
getch();
}
