/*to seperate the largest and smallest*/
 #include<stdio.h>
 #include<conio.h>
 void operate(float num[10],float *sum,float *diff)
 {
 int i,plarge,psmall;
 float large,small;
 large=num[0];
 small=num[0];
 for(i=0;i<10;i++)
 {
 if(num[i]>=large)
 {
 large=num[i];
 plarge=i;
 }
 }
 for(i=0;i<10;i++)
 {
 if(num[i]<=small)
 {
 small=num[i];
 psmall=i;
 }
 }
 printf("\n The largest is %f and its position is %d",large,plarge);
 printf("\n The smallest is %f and its positon is %d",small,psmall);
 *sum=large+small;
 *diff=large-small;
 }
void main()
{
int i;
float num[10],sum,diff;
clrscr();
printf("Enter the elements of an array :");
for(i=0;i<10;i++)
{
printf("\n num[%d]=",i);
scanf("%f",&num[i]);
}
operate(num,&sum,&diff);
printf("\n The sum of largest and smallest is %f",sum);
printf("\n The difference of largest and smallest is %f",diff);
getch();
}