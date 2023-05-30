/*to find hishest and lowest among three integer*/
#include<stdio.h>
#include<conio.h>
int findLowest(int,int,int);
int findHighest(int,int,int);
void main()
{
int a,b,c,h,l;
clrscr();
printf("Enter the value of three integers a,b and c:");
scanf("%d%d%d",&a,&b,&c);
l=findLowest(a,b,c);
h=findHighest(a,b,c);
printf("\n The lowest among three integer is %d",l);
printf("\n The highest among three integer is %d",h);
getch();
}
int findLowest(int a,int b, int c)
{
int n;
n=(a<b && a<c)?(n=a):((b<a && b<c)?(n=b):(n=c));
return(n);
}
int findHighest(int a,int b,int c)
{
int x;
x=(a>b && a>c)?(x=a):((b>a && b>c)?(x=b):(x=c));
return(x);
}