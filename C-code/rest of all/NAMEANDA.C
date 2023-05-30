#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char str[40];
printf("\n enter your age:");
scanf("%d",&age);
printf("\n enter your name:");
scanf(" %s",str);
printf("\n the age of %s is %d years",str,age);
getch();
}