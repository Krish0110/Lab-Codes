/*program to convert centigrade to fahrenheit*/
#include<stdio.h>
#include<conio.h>
void main()
{
float c,f;
clrscr();
printf("Enter the value of Centigrade measure:");
scanf("%f",&c);
f=(1.8*c)+32;
printf("\n The value of Fahrenheit measure is %f F.",f);
getch();
}