#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float a,b,c,d,e,f,x1,x2;
 clrscr();
printf("enter the coefficient  of quadratic equation  a ,b , c :");
scanf("%f %f %f",&a,&b,&c);
printf("\n quadratic equation is %fx^2 + %fx + %f = 0",a,b,c);
d=b*b-4*a*c;
if (d>0)
{
x1=(-b + sqrt(d))/(2*a);
x2=(-b - sqrt(d))/(2*a);
printf("\n real and unequal  roots are x1= %f and x2= %f",x1,x2);
}
else if(d==0)
{
x1=(-b)/(2*a);
printf("\n the real and equal roots are x1= %f and x2= %f",x1,x1);
}
else if (d<0)
{
e=(-b)/(2*a);
f=(sqrt(abs(d)))/(2*a);
printf("\nthe imaginary roots are x1= %f + %fi amd x2= %f -%fi",e,f,e,f);
}
getch();
}