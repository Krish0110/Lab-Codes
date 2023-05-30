 /*evaluate expression*/
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
 int x,y;
 float s;
 clrscr();
 printf("Enter the value of x and y:");
 scanf("%d%d",&x,&y);
 s=(float)pow(x,5) +(0.2*x*y)+pow(y,7);
 printf("\n The value of given expression is %f",s);
 getch();
 }
