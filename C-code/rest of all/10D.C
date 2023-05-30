/* to find the longest word in a string and count the vowels and consonants in word*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void longest(char s[100],int *vc,int*cc);
void main()
{
char s[100];
int vowel=0,consonant=0;
clrscr();
printf("Enter the string:");
gets(s);
longest(s,&vowel,&consonant);
printf("\n The longest word in string is :");
puts(s);
printf("\n The vowel letter in word is %d and consonant letter is %d",vowel,consonant);
getch();
}
void longest(char s[100],int *vc,int *cc)
{
int i=0,length=0,count=0,x=0,y=0;
char term[100],lw[100];
while(s[i]!='\0')
{
if(s[i]==' '|| s[i]=='.')
{
term[count]='\0';
if(length<count)
{
length=count;
strcpy(lw,term);
}
count=0;
}
else
{
term[count]=s[i];
count++;
}
i++;
}
for(i=0;lw[i]!='\0';i++)
{
s[i]=lw[i];
if(lw[i]=='a' || lw[i]=='e' || lw[i]=='o' || lw[i]=='u' || lw[i]=='i')
x++;
else
y++;
}
s[i]='\0';
*vc=x;
*cc=y;
}
