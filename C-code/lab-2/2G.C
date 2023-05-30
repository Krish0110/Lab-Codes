/*program to calculate equivalent resistance*/
#include<stdio.h>
#include<conio.h>
void main()
{
float r1,r2,rs,rp;
clrscr();
printf("Enter the value of two restiors R1 and R2:");
scanf("%f%f",&r1,&r2);
rs=r1+r2;
printf("\n The equivalent resistance in series is %f ohm.",rs);
rp=(r1 * r2)/(r1 +r2);
printf("\n The equivalent resistance in parallel is %f ohm.",rp);
getch();
}
