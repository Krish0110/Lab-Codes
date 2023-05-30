 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,n,l,s,r,a[100];
 clrscr();
 printf("Enter the size of an array n:");
 scanf("%d",&n);
 printf("\n Enter the element of an array:");
 for(i=0;i<n;i++)
 {
 printf("\n a[%d]=",i);
 scanf("%d",(a+i));
 }
 l=*(a+0);
 s=*(a+0);
 for(i=1;i<n;i++)
 {
 if(*(a+i)>l)
 l=*(a+i);
 if(*(a+i)<s)
 s=*(a+i);
 }
 printf("\n The largest is %d and smallest is %d",l,s);
 r=l-s;
 printf("\n The range is %d",r);
 getch();
 }