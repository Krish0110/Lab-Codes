/*program to find area of triangle */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,s,area,x;
clrscr();
printf("Enter the length of 3 sides of a triangle:");
scanf("%f%f%f",&a,&b,&c);
if((a+b)>c&&(b+c)>a&&(a+c)>b)
{
printf("\n The triangle exits.");
s=(a+b+c)/2;
x=(s-a)*(s-b)*(s-c);
area=sqrt(s*x);
printf("\n The area of the triangle is %f.",area);
}
else
printf("\n The triangle dorsnot exists.Enter the valid sides of triangle.");
getch();
}