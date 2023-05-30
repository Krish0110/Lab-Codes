/* to count the number of words in a string*/
#include<stdio.h>
#include<conio.h>
int count(char s[100])
{
int i,c=1;
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
c++;
}
return(c);
}
void main()
{
char s[100];
int l;
clrscr();
printf("Enter the string:");
gets(s);
l=count(s);
printf("\n The total numbers of words in astring is %d",l);
getch();
}