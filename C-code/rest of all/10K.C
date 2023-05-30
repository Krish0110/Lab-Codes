/*to sort name in alphabetic order*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void sorting(char s[10][100]);
void main()
{
int i;
char name[10][100];
clrscr();
printf("Enter the name of students:");
for(i=0;i<10;i++)
{
printf("\n name[%d]=",i);
gets(name[i]);
}
sorting(name);
printf("\n The name sorted in ascending order is :\n");
for(i=0;i<10;i++)
{
puts(name[i]);
}
getch();
}
void sorting(char s[10][100])
{
int j,i;
char temp[100];
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(strcmp(s[i],s[j])>0)
{
strcpy(temp,s[i]);
strcpy(s[i],s[j]);
strcpy(s[j],temp);
}
}
}
}
