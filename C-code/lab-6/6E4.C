/*program to print (1^2+2^2)/2 , (2^2+3^2)/3 , .... */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s;
float term;
clrscr();
printf("Enter the value of n:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=i+1;
term=(float)(i*i+s*s)/s;
printf("%f\t",term);
}
getch();
}
