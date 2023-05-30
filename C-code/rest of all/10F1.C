/*to stimulate strlen*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int l;
char s[100];
clrscr();
printf("Enter a string:");
gets(s);
printf("\n The given string is:");
puts(s);
l=strlen(s);
printf("\n The length of string is %d",l);
getch();
}