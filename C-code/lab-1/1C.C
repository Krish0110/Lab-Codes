#include<stdio.h>
#include<conio.h>
void main()
{
 int s,a,b;
 float p;
 clrscr();
 printf("Adress of s is %x",&s);    /*to know the adress of variable s*/
 printf("\n Adress of a is %x",&a);
 printf("\n\n Occupied number of bytes by variable s is %d",sizeof(s));
 /* sizeof is an operator.It returns the size occupied by any variable or data*/
 printf("\n\n\n Size of a %d",sizeof(p));
 printf("\n\n\n\n Size of 1.5 is %d",sizeof(1.5));
 printf("\n\n\n\n\n Size of float data type is %d",sizeof(float));
 getch();
 }
