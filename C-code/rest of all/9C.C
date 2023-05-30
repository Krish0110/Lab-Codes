#include<stdio.h>
#include<conio.h>
void main()
{
float marks[5];
int i;
clrscr();
printf("%d",marks);
printf("\n address of elements:");
for(i=0;i<5;i++)
printf("\n The address of element %d is %u \n",i,&marks[i]);
/*printf("address of element %d is %u\n",i,(marks+i));*/
getch();
}
