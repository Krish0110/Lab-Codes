//Bezier Curve
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>

int exclamatory(int num)
{
   int i,value;
   if(num==0)
   {
       return(1);
   }
   else
   {
   return(num*exclamatory(num-1));
   }

}
float valueOfC(int a,int n)
{
   float temp,value;
   temp=exclamatory(n)/(exclamatory(a)*exclamatory(n-a));
   return temp;
}

void main()
{
  int gd=DETECT,gm;
  int n,p,i;
  int x[10],y[10],C[10];
  float plotX,plotY,u,temp;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

  printf("\n Enter the number of control points :");
  scanf("%d",&p);
  n=p-1;

  printf("\n ENter the x and y co-ordinates of the control points:");
  for(i=0;i<p;i++)
  {
      printf("\nx%d:",i);
      scanf("%d",&x[i]);
      printf("\ny%d:",i);
      scanf("%d",&y[i]);
      C[i]=valueOfC(i,n);
      putpixel(x[i],y[i],3);
  }
  for(u=0.0;u<=1.0;u=u+0.001)
  {
      plotX=0;
      plotY=0;
      for(i=0;i<p;i++)
      {
	  temp=C[i]*pow(u,i)*pow(1-u,n-i);
	  plotX+=x[i]*temp;
	  plotY+=y[i]*temp;
      }
      putpixel(plotX,plotY,WHITE);
  }
  getch();
  closegraph();
}


