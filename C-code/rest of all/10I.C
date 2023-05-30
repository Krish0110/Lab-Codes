/*to count the frequency of all the character in string*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void  main()
{
char s[100],ch[100];
int i,j,count[100],test,k=0;
clrscr();
printf("Enter a string:");
gets(s);
for(i=0;i<strlen(s);i++)
{
if(('A'<=s[i]<='Z')||('a'<=s[i]<='z'))
{
test=1;
for(j=0;j<strlen(s);j++)
{
 if(s[i]==ch[j])
 test=0;
}
if(test==1)
{
ch[k]=s[i];
k++;
}
}
}
ch[k]='\0';
for(i=0;ch[i]!='\0';i++)
{
count[i]=0;
for(j=0;s[j]!='\0';j++)
{
if(ch[i]==s[j])
count[i]+=1;
}
}
printf("\n The characters and their frequency are:");
for(i=0;ch[i]!='\0';i++)
{
printf("\n The frequency of %c is %d",ch[i],count[i]);
}
getch();
}


