/*to stimulate strcmp()*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int c;
char s1[100],s2[100];
clrscr();
printf("Enter the first string:");
gets(s1);
printf("\n Enter the second string:");
gets(s2);
printf("\n The first and second string are :");
puts(s1);
puts(s2);
c=strcmp(s1,s2);
if(c==0)
printf("\n The strings are smilar");
else
printf("\n The strings are not simlar");
getch();
}