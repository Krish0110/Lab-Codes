#include<stdio.h>
#include<conio.h>
void main()
{
int a=12345;
clrscr();
printf("\n case 1 %d",a);
printf("\n case 2 %i",a);
printf("\n case 3 %+15d",a);
printf("\n case 4 %-15d",a);
printf("\n case 5 %015d",a);
printf("\n case 6 %-+15d",a);
printf("\n case 7 %3d",a);
getch();
}