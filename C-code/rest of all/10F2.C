/*to stimulate strcat()*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
clrscr();
printf("Enter the first string:");
gets(s1);
printf("\n Enter the second string:");
gets(s2);
printf("\n The two strngs are:\n");
puts(s1);
puts(s2);
strcat(s1,s2);
printf("\n The combined string is:\n");
puts(s1);
getch();
}