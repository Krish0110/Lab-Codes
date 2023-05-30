/*to stimulate strcpy*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
clrscr();
printf("Enter the string s1 to be copied:");
gets(s1);
printf("\n Enter another string in which s1 is to be copied s2:");
gets(s2);
printf("\n The inital string in s2 is :");
puts(s2);
strcpy(s2,s1);
printf("\n The final string in s2 after coped from s1 is:");
puts(s2);
getch();
}
