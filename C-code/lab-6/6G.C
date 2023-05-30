/* to evaluate 1+x/1!+x^2/2!+.....*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i=1,j,den;
float sum=1,x,term,limit,num;
clrscr();
printf("Enter the value of x:");
scanf("%f",&x);
limit=1e-6;
do
{
num=pow(x,i);
den=1;
for(j=1;j<=i;j++)
{
den=den*j;
}
term=(float)(num/den);
sum=sum+term;
i=i+1;
}while(term>=limit);
printf("\n The sum of series until term is less than 10^-6 is %f",sum);
getch();
}
