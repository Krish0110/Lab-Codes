/*programe to evaluate volume of cuboid*/
#include<stdio.h>
#include<conio.h>
void main()
{
 float l,h,b,v;
 clrscr();
 printf("Enter the value length ,breadth ,height of a cuboid:");
 scanf("%f%f%f",&l,&b,&h);
 printf("\n The length is %f ,breadth is %f,height is %f.",l,b,h);
 v=l*b*h;
 printf("\n The volumr of cuboid is %f.",v);
 getch();
 }
