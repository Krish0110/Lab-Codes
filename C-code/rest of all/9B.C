/* to find larger between two number using concept of function and pointer*/
#include<stdio.h>
#include<conio.h>
void larger(int * a, int * b, int *large)
{
if(*a>*b)
*large=*a;
else
*large=*b;
}
void main()
{
int p,q,largest;
clrscr();
printf("Enter the value of p and q:");
scanf("%d%d",&p,&q);
larger(&p,&q,&largest);
printf("\n The larger number among two number is %d",largest);
getch();
}