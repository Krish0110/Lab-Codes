/*to convert upper to lower case and vice versa*/
#include<stdio.h>
#include<conio.h>
void convert(char s[])
{
int i;
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='A'&&s[i]<='Z')
s[i]=s[i]+32;
else if (s[i]>='a'&&s[i]<='z')
s[i]=s[i]-32;
else
s[i]=s[i];
}
}
void main()
{
char s[100];
clrscr();
printf("Enter a string");
gets(s);
printf("\n The orignal string is :");
puts(s);
convert(s);
printf("\n The converted string is :");
puts(s);
getch();
}
