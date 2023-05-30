/*terms of fibonacci series*/
#include<stdio.h>
#include<conio.h>
void main()
{
int first=0,second=1,term;
clrscr();
printf("%d\t%d",first,second);
term=first+second;
while(term<=500)
{
 printf("\t%d",term);
 first=second;
 second=term;
 term=first+second;
 }
 getch();
 }