/*progran to print multiplication table of m*n*/
#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,i;
clrscr();
printf("Enter ther value of integer m and limit n:");
scanf("%d%d",&m,&n);
printf("\n The multiplication tablr of m*n is :");
for(i=1;i<=n;i++)
printf("\n %d * %d = %d",m,i,m*i);
getch();
}
