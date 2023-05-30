 /*to find sum of digits of integer*/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n,sum=0,rem;
 clrscr();
 printf("Enter any positive integer:");
 scanf("%d",&n);
 while(n!=0)
 {
 rem=n%10;
 sum=sum+rem;
 n=n/10;
 }
 printf("\n The sum of the digits in integer is %d",sum);
 getch();
 }