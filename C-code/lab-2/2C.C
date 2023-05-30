/* program to display the largest number*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,l;
clrscr();
printf("Enter three different integers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
l=a;
else if(b>a && b>c)
l=b;
else
l=c;
printf("\n The largest integer is %d",l);
getch();
}