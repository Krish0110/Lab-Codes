/*progaram to convert second to minute*/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int seconds,min;
 clrscr();
 printf("Enter number of seconds:");
 scanf("%d",&seconds);
 min=seconds/60;
 seconds=seconds%60;
 printf("\n Minutes=%d",min);
 printf("\n Seconds=%d",seconds);
 getch();
 }