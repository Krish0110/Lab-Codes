/*progarm to find midpoint*/
#include<stdio.h>
#include<conio.h>
void main()
{
float  x1,x2,y1,y2;
float x,y;
clrscr();
printf("Enter the two end points (x1,y1) and (x2,y2) of line ;");
scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
printf("\n The two points are (%f,%f) and (%f,%f)",x1,y1,x2,y2);
x=(x1+x2)/2;
y=(y1+y2)/2;
printf("\n The mid point of the line is (%f,%f).",x,y);
getch();
}
