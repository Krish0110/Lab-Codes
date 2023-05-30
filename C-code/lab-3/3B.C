/*to read a character and string*/
#include<stdio.h>
#include<conio.h>
void main()
{
char ch,s[30];
clrscr();
printf("Enter a character and a string :");
scanf(" %c%s",&ch,&s);
printf("\n The character is %c",ch);
printf("\n The string is %s",s);
getch();
}