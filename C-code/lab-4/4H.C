/*program to display day*/
#include<stdio.h>
#include<conio.h>
void main()
{
int day;
clrscr();
printf("Enter a number of a day:");
scanf("%d",&day);
if(day==1)
printf("\n The day is Sunday.");
else if(day==2)
printf("\n The day is Monday.");
else if(day==3)
printf("\n The day is Tuesday.");
else if(day==4)
printf("\n The day is Wednesday.");
else if(day==5)
printf("\n The day is Thursday.");
else if(day==6)
printf("\n The day is Friday.");
else if(day==7)
printf("\n The day is Saturday.");
else
printf("\n Enter a valid day number.");
getch();
}