 /*to find highest and lowest element of array*/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,j,num[3][3],largest,smallest;
 clrscr();
 printf("Enter the element of an array:");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("\n num[%d][%d]=",i,j);
 scanf("%d",&num[i][j]);
 }
 }
 largest=num[0][0];
 smallest=num[0][0];
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 if(num[i][j]>=largest)
 largest=num[i][j];
 }
 }
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 if(num[i][j]<=smallest)
 smallest=num[i][j];
 }
 }
 printf("\n The largest element is %d and smallest is %d",largest,smallest);
 getch();
 }

