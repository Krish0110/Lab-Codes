#include<stdio.h>
#include<conio.h>
void main()
{
int s,a,b,c=20;
clrscr();
printf("Enter value of a:");     /*to display message on the screen*/
scanf("%d",&a);     /*to give value of a*/
printf("\n Enter value of b:");
scanf("%d",&b);
s=a+b*c;     /*processing*/
printf("\n sum =%d",s);    /*to display the sorted value of s*/
getch();    /*tp make program wait until user enters any character*/
}
