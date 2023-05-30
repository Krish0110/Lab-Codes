/*to clculate fequency of a character*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,count=0;
char s[100];
char ch;
clrscr();
printf("Enter a string :");
gets(s);
printf("\n Enter a character whose frequency is to be calculated:");
ch=getchar();
while(s[i]!=0)
{
if(ch==s[i])
count++;
i++;
}
printf("\n The frequency of charcter %c is %d",ch,count);
getch();
}