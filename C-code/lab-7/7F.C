/*to count odd and even digits in an integer*/
#include<stdio.h>
#include<conio.h>
void countDigits(int*,int*);
unsigned int n;
void main()
{
int even_count=0,odd_count=0;
clrscr();
printf("Enter an positive integer n:");
scanf("%u",&n);
countDigits(&even_count,&odd_count);
printf("\n The number of odd digits in integer is %d",odd_count);
printf("\n The number of even digits in integer is %d",even_count);
getch();
}
void countDigits(int *ec,int *oc)
{
int rem;
while(n!=0)
{
rem=n%10;
if(rem%2==0)
*ec=*ec+1;
else
*oc=*oc+1;
n=n/10;
}
}
