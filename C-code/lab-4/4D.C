/*program to check upper case and lower case*/
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter any character:");
scanf(" %c",&ch);
if(ch>=65&&ch<=90)
{
printf("\n The character is upper case.");
printf("\n The updated character is %c.",ch+32);
}
else if(ch>=97&&ch<=122)
{
printf("\n The character is lower case.");
printf("\n The uodated character is %c.",ch-32);
}
else
printf("\n Not a valid character.");
getch();
}