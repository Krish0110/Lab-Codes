/*f(x)=x+x^2/2!+x^3/3!+....*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,j,den;
float x,sum=0,term,num;
clrscr();
printf("enter the value of x in radian and number of terms n:");
scanf("%f%d",&x,&n);
for(i=1;i<=n;i++)
{
num=pow(x,i);
den=1;
for(j=1;j<=i;j++)
den=den*j;
term=num/den;
sum+=term;
}
printf("\n The value of the expression is %f",sum);
getch();
}
