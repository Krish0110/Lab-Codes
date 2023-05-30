/*program to print 1,2,3,4,5......n*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter value of n:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
printf("%d,",i);
getch();
}
