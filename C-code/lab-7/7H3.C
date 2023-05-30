/*to find hcf of two number */
#include<stdio.h>
#include<conio.h>
int hcf(int a,int b)
{
int r;
r=a%b;
if(r==0)
return(b);
else
return(a=b,b=r,hcf(a,b));
}
void main()
{
int a,b,h;
clrscr();
printf("Enter the value of a nad b");
scanf("%d%d",&a,&b);
h=hcf(a,b);
printf("\n The hcf of %d and %d is %d",a,b,h);
getch();
}
