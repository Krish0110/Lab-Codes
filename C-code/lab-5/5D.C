/*to find sum if odd and product if even*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0,p=1;
clrscr();
printf("Enter any integer number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if(i%2==0)
  p=p*i;
  else
  sum=sum+i;
}
printf("\n Product of even number is %d",p);
printf("\n Sum of odd number is %d",sum);
getch();
}