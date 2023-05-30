/*programe to find volume of sphere */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float r,v,p=3.14;
clrscr();
printf("Enter the value of radius of sphere,r:");
scanf("%f",&r);
v=(4/3)*(p*pow(r,3));
printf("\n The volume of sphere is %f",v);
getch();
}