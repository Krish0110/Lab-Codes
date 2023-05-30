#include<stdio.h>
#include<conio.h>
void main()
{
int *p,*q;    /*declaration of pointer variables*/
int a,b;
clrscr();      /*declaration of ordinary variables*/
p=&a;        /*using referencing operator to initialize pointer variable p*/
q=&b;
printf("address of a=%u\n",&a);
printf("address of b=%u\n",&b);
printf("value of p=%u\n",p);
printf("value of q=%u\n",q);
printf("Enter value of a and b:");
scanf("%d%d",&a,&b);
printf("The value pointed by p is %d \n",*p);  /*using deferencing operator(*).*/
printf("The value pointed by q is %d \n",*q);
printf("a+b=%d\n",a+b);
printf("*p+*q=%d",*p+*q);      /* *p+*q -> pointer expression*/
getch();
}