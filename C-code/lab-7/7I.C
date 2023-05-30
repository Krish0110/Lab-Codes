/* to compute sum of series 1^2-2^2+3^2-.....(-1)^(n+1)n^n */
#include<stdio.h>
#include<conio.h>
int sign(int a)
{
if(a==1)
return((-1));
else
return((-1)*sign(a-1));
}
long int square(int i)
{
return(i*i);
}
void main()
{
int n,i,a,s;
long int t,term,sum=0;
clrscr();
printf("Enter the number of terms in series n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=i+1;
s=sign(a);
t=square(i);
term=s*t;
sum+=term;
}
printf("\n The sum of given series is %ld",sum);
getch();
}
