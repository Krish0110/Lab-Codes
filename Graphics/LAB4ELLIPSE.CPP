//Ellipse algorithm
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>

void drawI(int x, int y, int u, int v)
{
putpixel(x+u,y+v,RED);
putpixel(-x+u,y+v,BLUE);
putpixel(x+u,-y+v,GREEN);
putpixel(-x+u,-y+v,YELLOW);
}

void main()
{
   int gd=DETECT, gm;
   int xk,yk,h,k,a,b;
   float p1k,p2k,x0,y0;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

   printf("\n Emter the center(h,k) of ellipse:");
   printf("\n h:");
   scanf("%d",&h);
   printf("\n k:");
   scanf("%d",&k);

   printf("\n Enter the x-radius(a) and y-radius(b) of ellipse:");
   printf("\n a:");
   scanf("%d",&a);
   printf("\n b:");
   scanf("%d",&b);
   clearviewport();
   //setting first point
   xk=0;
   yk=b;

   //computing p-value for region-I
   p1k=pow(b,2)-b*pow(a,2)+(pow(a,2)/4);

   //starting from k=0 till 2xkb^2<=2yka^2
   do
   {
       drawI(xk,yk,h,k);
       delay(100);

       if(p1k<=0)
       {
	  xk=xk+1;
	  yk=yk;
	  p1k=p1k+(2*xk*pow(b,2))+pow(b,2);
       }
       else
       {
	  xk=xk+1;
	  yk=yk-1;
	  p1k=p1k+(2*xk*pow(b,2))-(2*yk*pow(a,2))+pow(b,2);
       }
   }while((2*xk*pow(b,2)) <= (2*yk*pow(a,2)));

   //computing p-value for regionII
   x0=xk+1/2;
   y0=yk-1;
   p2k=pow(x0,2)*pow(b,2)+pow(y0,2)*pow(a,2)-pow(a,2)*pow(b,2);

   //starting from k==0 till yk>0
   do
   {
       drawI(xk,yk,h,k);
       delay(100);
       if(p2k<=0)
       {
	  xk=xk+1;
	  yk=yk-1;
	  p2k=p2k+2*xk*pow(b,2)-2*yk*pow(a,2)+pow(a,2);
       }
       else
       {
	 xk=xk;
	 yk=yk-1;
	 p2k=p2k-2*yk*pow(a,2)+pow(a,2);
       }
   }while(yk>0);

   drawI(xk,yk,h,k);
   delay(100);
   getch();
   closegraph();
   }


