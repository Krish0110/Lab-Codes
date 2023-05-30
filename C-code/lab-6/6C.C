/*program to display prime and palin drome between n1 and n2*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,x,i,j,k,count1=0,count2=0,sum,rem;
clrscr();
printf("Enter the value of n1 and n2:");
scanf("%d%d",&n1,&n2);
if (n1<n2)
{
printf("\n The prime numbers between %d and %d are:",n1,n2);
for(i=n1;i<=n2;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
break;
}
if(j==i)
{
printf("\n%d",i);
count1+=1;
}
}

printf("\n The count of prime number is %d",count1);
printf("\n The palindrome number between %d and %d are:",n1,n1);
for(k=n1;k<=n2;k++)
{
sum=0;
x=k;
while(x!=0)
{
rem=x%10;
sum=sum*10+rem;
x=x/10;
}
if(k==sum)
{
printf("\n %d",k);
count2+=1;
}
}
printf("\n The count of palindrome number is %d",count2);
}
else
printf("enter n1 smaller tha n2.");
getch();
}
