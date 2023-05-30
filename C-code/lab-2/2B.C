/*illustrate prefix increment operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
int x=5,v;
clrscr();
v=++x * ++x + ++x;
printf(" v=%d , x=%d ",v,x);
getch();
}