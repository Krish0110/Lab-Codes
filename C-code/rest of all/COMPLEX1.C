/* f(x)=x+x^2/2! - x^4/4!+.....*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,sign=-1,den,n;
float x, sum , term , num;
clrscr();
printf("Enter the value of x in radian and number of terms n:");
scanf("%f%d",&x,&n);
sum=x;
for(i=1;i<n;i++)
{
sign=sign*(-1);
num=pow(x,2*i);
den=1;
    for(j=1;j<=(2*i);j++)
    den=den*j;
term=sign*(num/den);
sum=sum+term;
}
printf("\n The value of expression is %f",sum);
getch();
}
