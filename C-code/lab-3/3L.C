/* defining search set to read string*/
#include<stdio.h>
#include<conio.h>
void main()
{
char str[70];
clrscr();
printf("Enter a string :");
scanf("%[^M]",str);
printf("\n The read string is : %s",str);
getch();
}