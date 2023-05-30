/*program to use getchar and putchar*/
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter any characte:");
ch= getchar();
printf("\n The entered character is :");
putchar(ch);
getch();
}