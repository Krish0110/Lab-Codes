/*Programe to find simple intrest*/
#include<stdio.h>
#include<conio.h>
void main()
{
float p,t,r,si;
clrscr();
printf("Enter the value of P,T and R:");
scanf("%f%f%f",&p,&t,&r);
printf("\n the value of P is %f ,T is %f, R is %f",p,t,r);
si=(p*t*r)/100;
printf("\n The simple intrest is Rs %f",si);
getch();
}