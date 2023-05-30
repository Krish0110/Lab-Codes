#include<stdio.h>
#include<conio.h>
void main()
{
int i,n[5],l,s;
clrscr();
printf("Enter the element of an array:");
for(i=0;i<5;i++)
{
printf("\n n[%d]=",i);
scanf("%d",(n+i));
}
l=*(n+0);
s=*(n+0);
for(i=0;i<5;i++)
{
if(*(n+i)>=l)
l=*(n+i);
 if(*(n+i)<=s)
 s=*(n+i);
}
printf("\n The largest number is %d",l);
printf("\n The lowest number is %d",s);
getch();
}