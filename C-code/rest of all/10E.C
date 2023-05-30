/*to reverse a string using recursive function*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void reverse(char s[],int length);
void main()
{
int l;
char s[100];
clrscr();
printf("Enter a string:");
gets(s);
printf("\n The original string is:");
puts(s);
l=strlen(s)-1;
printf("\n The reversed string is:");
reverse(s,l);
getch();
}
void reverse(char s[],int length)
{
putchar(s[length]);
if(length>=0)
reverse(s,length-1);
else
putchar('\0');
}