/*program to find sum of all positive number until user enter 0*/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n,sum=0,l=1;
 clrscr();
 while(l!=0)
 {
 printf("\nEnter value of n:");
 scanf("%d",&n);
 if(n>0)
 {
 sum+=n;
 printf("\n sum=%d",sum);
 }
 else
 printf("\n Enter positive number");
 printf("\n Enter zero to exit and any other number to continue:");
 scanf("%d",&l);
 }
 printf("\n The sum of numbers is %d",sum);
 getch();
 }
