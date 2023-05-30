/*defining search set to read string*/
#include<stdio.h>
#include<conio.h>
void main()
{
char str[70];
clrscr();
printf("How old are you:");
scanf("%[a-z0-9]",str);
printf("\n Read string is : %s",str);
getch();
}