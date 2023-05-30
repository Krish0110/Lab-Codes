/*progaram to find mean of 4 integers*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,d,m;
clrscr(),
printf("Enter the value of four intergers a,b,c,d :");
scanf("%f%f%f%f",&a,&b,&c,&d);
printf("\n the four intergers are %f, %f, %f,%f",a,b,c,d);
m=(a+b+c+d)/4;
printf("\n The mean of four integers is %f",m);
getch();
}
