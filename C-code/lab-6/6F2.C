/*program to evaluate e^-1= 1-1/1!+1/21-......(-1)^(n+1)/(n-1)!*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,n,den;
float num,s=0,t;
clrscr();
printf("Enter the number of terms n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
num=pow((-1),(i+1));
den=1;
for(j=0;j<i;j++)
{
if(j==0)
den=1;
else
{
den=den*j;
}
}
t=num/den;
s=s+t;
}
printf("\n The sum of series e^-1 is %f",s);
getch();
}
