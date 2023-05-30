/*program to print multiplication table*/
#include<stdio.h>
#include<conio.h>
void main()
{
int x,i;
clrscr();
printf("Enter the value positive integer:");
scanf("%d",&x);
printf("\n The multiplication table of %d is :",x);
for(i=1;i<=10;i++)
{
printf("\n %d * %d = %d",x,i,x*i);
}
getch();
}
