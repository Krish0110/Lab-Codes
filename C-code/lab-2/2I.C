/*program to find the ratio of boys and girls*/
#include<stdio.h>
#include<conio.h>
void main()
{
int g,b;
float r;
clrscr();
printf("Enter the number of girls and boys in class:");
scanf("%d%d",&g,&b);
r=(float)g/b;
printf("\n The ratio of girls to boys in class is %f.",r);
getch();
}