/*display from 1 to n*/
#include<stdio.h>
#include<conio.h>
void main()
{
unsigned int i,n;
clrscr();
printf("Enter the positive integer:");
scanf("%u",&n);
for(i=1;i<=n;i++)
{
printf("%u\t",i);
}
getch();
}
