/*program to read integer until user enters no*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,total=0,value;
float average=0;
char str1[20];
char str2[20]="no";
clrscr();
do
{
printf("\n Enter positive integer:");
scanf("%d",&n);
if(n%9==0 && n%6!=0 && 1<n<100)
{
sum=sum+n;
total+=1;
average=(float) sum/total;
printf("\n sum=%d and average=%f",sum,average);
}
else
printf("\nEnter number divisible by 9 but not by 6 and lies between 1 to 100");
printf("\nEnter 'no' to exit and any other character to continue:");
scanf("%s",str1);
value=strcmp(str1,str2);
}while(value!=0);
printf("\n The total sum is %d and average is %f",sum,average);
getch();
}
