/*to print a word in aphabetical order*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j;
char s[100],temp;
clrscr();
printf("Enter a string:");
gets(s);
printf("\n The entered string is :");
puts(s);
for(i=0;s[i]!='\0';i++)
{
for(j=i+1;s[j]!='\0';j++)
{
if(s[j]<s[i])
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
}
printf("\n The string arranged in alphabetic order is :");
puts(s);
getch();
}
