#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char str[40];
clrscr();
printf("\n Enter your age:");
scanf("%d",&age);
printf("\n Enter your name:");
scanf(" %s",str);
printf("\n The age of %s is %d years",str,age);
getch();
}