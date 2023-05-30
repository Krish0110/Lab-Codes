/*illustartion of different format specifications*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter an integer number :");
scanf("%d",&a);
printf("\n The read and stored value of a is =%d",a);
printf("\n Enter another integer number:");
scanf("%3d",&b);
printf("\n The read and stored value of b is =%d",b);
getch();
}
