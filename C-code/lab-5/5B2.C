/*to diaplay from n to 1*/
#include<stdio.h>
#include<conio.h>
void main()
{
unsigned int n,i;
clrscr();
printf("\n Enter a postive number:");
scanf("%u",&n);
for(i=n;i>=1;i--)
printf("%u\t",i);
getch();
}