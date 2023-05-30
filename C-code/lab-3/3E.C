#include<stdio.h>
#include<conio.h>
void main()
{
float n=123.9876;
clrscr();
printf("\n case 1 %f",n);
printf("\n case 2 %e",n);
printf("\n case 3 %g",n);
printf("\n case 4 %15.4f",n);
printf("\n case 5 %-15.3f",-n);
printf("\n case 6 %015.4e",n);
printf("\n case 7 %.8f",n);
printf("\n case 8 %2.2f",n);
getch();
}