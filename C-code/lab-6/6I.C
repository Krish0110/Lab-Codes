/* to find sum of positive integer until user enters n*/
#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,i;
char ch;
clrscr();
while(ch!='n')
{
printf("\nEnter positive integer:");
scanf(" %d",&i);
if(i>=0)
{
sum=sum+i;
printf( "\nsum=%d",sum);
}
else
printf(" \n Please Enter positive  integer.");
printf("\n Enter n to exit and other to continue:");
scanf(" %c",&ch);
}
printf("\n The total sum is %d",sum);
getch();
}
