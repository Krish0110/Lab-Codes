/*evaluate expression*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float u,v,x,y,p,q,a,r,b,c;
clrscr();
printf("Enter the value of u,v,x,y,p and q :");
scanf("%f%f%f%f%f%f",&u,&v,&x,&y,&p,&q);
a=(u/x)+(v/y);
b=(p*p)/(3*pow(u,2.5));
c=q/(2*v);
r=pow(a,5)/pow((b-c),3.5);
printf("\n The value of expression is %f.",r);
getch();
}
