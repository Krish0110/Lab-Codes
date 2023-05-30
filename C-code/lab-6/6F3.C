/*program to evaluate f(x)=1-x^2/2!+x^4/4!-.....(-1)^i x^2i/2i!*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,n,den,sign=-1;
float x,t,s=0,num;
clrscr();
printf("Enter the value of x in radian and number of terms n:");
scanf("%f%d",&x,&n);
for(i=0;i<n;i++)
{
sign=sign*(-1);
num=pow(x,2*i);
den=1;
for(j=1;j<=2*i;j++)
den=den*j;
t=sign*(num/den);
s=s+t;
}
printf("\n The value of series f(%f) is %f",x,s);
getch();
}
