/*use of gets and puts*/
#include<stdio.h>
#include<conio.h>
void main()
{
char s[40];
clrscr();
printf("Enter a string:");
gets(s);
printf("\n The entered string is:");
puts(s);
getch();
}