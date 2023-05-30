/*observe the output*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a;
char b;
long int c;
unsigned int e;
clrscr();
printf("Enter value of a:");
scanf("%f",&a);
printf("\n Enter value of b:");
scanf(" %c",&b);   /*put space before %c*/
printf("\n Enter value of c and e:");
scanf("%ld%u",&c,&e);
printf("\n Value of a:%f \n Value of b:%c \n Value of c:%ld \n Value of e:%u",a,b,c,e);
getch();
}
