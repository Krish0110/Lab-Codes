/*to eveluate x^n */
#include<stdio.h>
#include<conio.h>
long int power(float x,int n)
{
if(n==0)
return(1);
else
return(x * power(x,n-1));
}
void main()
{
int n;
float x,a;
clrscr();
printf("Enter the value of x and n:");
scanf("%f%d",&x,&n);
a=power(x,n);
printf("\n The value of x to power %d is %f",n,a);
getch();
}
