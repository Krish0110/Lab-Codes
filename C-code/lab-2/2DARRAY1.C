#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,num[2][2]={{4,5},{6,7}};
clrscr();
for(i=0;i<2;i++)
for(j=0;j<2;j++)
printf("\n %d",num[i][j]);
getch();
}
