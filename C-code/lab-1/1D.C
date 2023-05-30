/* programe to find area and circumference of circle */

#include<stdio.h>
#include<conio.h>
void main()
{
 float r,a,c,p=3.14;
 clrscr();
 printf("Enter valiue of radius of circle,r:");
 scanf("%f",&r);
 a=p*r*r;
 printf("\n The area of circle is %f",a);
 c=2*p*r;
 printf("\n The circumference of circle is %f",c);
 getch();
 }

