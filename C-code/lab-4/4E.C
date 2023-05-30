/*program to check the number is odd or even*/
#include<stdio.h>
#include<conio.h>
void main()
{
unsigned int n;
clrscr();
printf("Enter the positive integer number:");
scanf("%u",&n);
if(n%2==0)
{
printf("\n The number is even.");
    if(n>100)
    printf("\n The even number is greater than 100.");
    else if(n==100)
    printf("\n The even number is equal to 100.");
    else
    printf("\n The even number is less than 100.");
}
else if(n%2!=0)
{
printf("\n The number is odd.");
    if(n%11==0 && n%7==0)
    printf("\n The odd number is divisible by bothh 11 and 7.");
    else if(n%11==0 && n%7!=0)
    printf("\n The odd number is divisible by 11 but not by 7.");
    else if(n%11!=0 && n%7==0)
    printf("\n The odd number is divisible by 7 but not by 11.");
    else
    printf("\n The odd number is not divisible by both 11 and 7.");
}
else
printf("\n Enter the positive integer number.");
getch();
}