/*program to determine root of quadratic equation*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,d,x1,x2,e,f;
clrscr();
printf("Enter the value of coefficient of quadratic equation a,b and c:");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d>0)
{
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("\n The real and unequal roots are x1=%f and x2=%f",x1,x2);
}
else if(d==0)
{
x1=(-b)/(2*a);
printf("\n The real and equal roots are x1=%f and x2=%f",x1,x1);
}
else if(d<0)
{
e=(-b)/(2*a);
f=sqrt(abs(d))/(2*a);
printf("\n the imaginary roots are x1=%f+%fi and x2=%f-%fi ",e,f,e,f);
}
else
printf("\n Enter the valid coefficients.");
getch();
}






