/*to perform task choosen by user*/
#include<stdio.h>
#include<conio.h>
void add(int a,float b)
{
float s;
printf("\n Enter the value of a and b:");
scanf("%d%f",&a,&b);
s=a+b;
printf("\n The sum of two number is %f",s);
}
void sumOfDigits(int n)
{
int sum=0,rem;
printf("\n Enter the positive integer n:");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("\n The sum of digits in the integer is %d",sum);
}
void fact(int n)
{
int i;
long int f=1;
printf("\n Enter the positive integer number :");
scanf("%d",&n);
if(n>0)
{
for(i=1;i<=n;i++)
f=f*i;
}
printf("\n Factorial of %d is %ld",n,f);
}
void check_prime(int n)
{
int i;
printf("\n Enter the positive integer number :");
scanf("%d",&n);
if(n>0)
{
for(i=2;i<n;i++)
{
if(n%i==0)
break;
}
if(i==n)
printf("\n The number is prime");
else
printf("\n The number is not prime");
}
else
printf("\n Please! Enter postive integer");
}
void main()
{
char ch;
int a,b,n;
clrscr();
printf("If you want to find sum of two number enter 's'.");
printf("\n If you want to find sum of digits of an integer enter 'd'.");
printf("\n If you want to find factorial of number enter 'f'.");
printf("\n If you want to check whether number is prime or not enter 'p'.");
printf("\n Enter the character of program you want to run:");
scanf(" %c",&ch);
switch(ch)
{
case 's':
add(a,b);
break;

case 'd':
sumOfDigits(n);
break;

case 'f':
fact(n);
break;

case 'p':
check_prime(n);
break;

deafult:
printf("\n Enter valid character");
break;
}
getch();
}



