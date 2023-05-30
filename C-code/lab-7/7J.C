/*to compute series sin(x)*/
#include<stdio.h>
#include<conio.h>
long int fact(int j)
{
if(j==0)
return(1);
else
return(j*fact(j-1));
}
float num(float x,int n)
{
if(n==0)
return(1);
else
return(x*num(x,n-1));
}
void main()
{
int n,i,sign=-1,power,degree;
float x,term,sum=0,numerator;
long int den;
clrscr();
printf("Enter the value of angle x in degree and number of terms n:");
scanf("%f%d",&x,&n);
degree=x;
x=x*(3.14/180);
for(i=1;i<=n;i++)
{
sign*=-1;
power=2*i-1;
numerator=num(x,power);
den=fact(power);
term=sign*numerator/den;
sum+=term;
}
printf("\n The value of sin(%d) is %f",degree,sum);
getch();
}
