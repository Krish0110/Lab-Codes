/*programe to read time for c programming study*/
#include<stdio.h>
#include<conio.h>
void main()
{
float h,m,s,t;
clrscr();
printf("Enter hours, minutes,and seconds you study c programming in a day:");
scanf("%f%f%f",&h,&m,&s);
printf("\n You study %f hours, %f minutes and %f seconds a day",h,m,s);
t=((h*3600)+(m*60)+s)*30;
printf("\n You study %f seconds c programming in 30 days",t);
getch();
}