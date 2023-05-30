/* to calculate x^n/n! */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,fact=1;
float x,a;
clrscr();
printf("Enter the value of integer:");
scanf("%d",&n);
printf("\n Enter the vakue of x:");
scanf("%f",&x);
if (n>=0)
{
  for(i=1;i<=n;i++)
  {
  fact=fact*i;
  }
  a=(float)pow(x,n)/fact;
  printf("\n The valu of (x^n/n!) is %f",a);
}
else
printf("\n Enter the valid integer");
getch();
}