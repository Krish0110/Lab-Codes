/*arithematic operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
char op;
float a,b;
clrscr();
printf("Enter an arithematic operator:");
scanf(" %c",&op);
printf("\n Enter any two numbers:");
scanf("%f%f",&a,&b);
switch(op)
{
case '+':
printf("\n Sum(a+b)=%f",a+b);
break;

case '-':
printf("\n Difference(a-b)=%f",a-b);
break;

case'*':
printf("\n product(a*b)=%f",a*b);
break;

case'/':
printf("\n Quotient(a/b)=%f",a/b);
break;

deafult:
printf("\n Enter a valid operator.");
break;
}
getch();
}



