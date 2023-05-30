/*to check whether the string is palindrome or not*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,c;
clrscr();
char s1[100],s2[100];
printf("Enter the string :");
gets(s1);
i=0;
while(s1[i]!='\0')
{
s2[i]=s1[i];
i++;
}
strrev(s1);
printf("\n The given string is ");
puts(s2);
printf("\n The reversed string is :");
puts(s1);
c=strcmp(s1,s2);
if(c==0)
printf("\n The given string is palindrome");
else
printf("\n The given string is not palindrome");
getch();
}
