#include<stdio.h>
#include<conio.h>
void main()
{
int i,n[5],s=0;
clrscr();
printf("Enter the member of an array:");
for(i=0;i<5;i++)
{
printf("\n n[%d]=",i);
scanf("%d",(n+i));
}
for(i=0;i<5;i++)
{
s+=*(n+i);
}
printf("\n The sum of elements of an array is %d",s);
getch();
}

