/*concept of reading string using wc*/
#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
clrscr();
printf("Enter a string:");
scanf(" %10c",str);
printf("\n The read string is %s",str);
getch();
}