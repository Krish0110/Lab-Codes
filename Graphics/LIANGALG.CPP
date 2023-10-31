//Liang Barsky line clipping algorithm
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>

void main()
{
  clrscr();
  int gd=DETECT,gm;
  int x1,x2,y1,y2,Xwmin,Ywmin,Xwmax,Ywmax,newX1,newY1,newX2,newY2;
  int dx,dy,i=0;
  float t1=0,t2=1,temp,p[4],q[4];
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

  printf("Enter the two points for the window:");
  printf("\nXwmin:");
  scanf("%d",&Xwmin);
  printf("\n Ywmin:");
  scanf("%d",&Ywmin);
  printf("\n Xwmax:");
  scanf("%d",&Xwmax);
  printf("\n Ywmax:");
  scanf("%d",&Ywmax);

  printf("Enter the two points of line:");
  printf("\n x1:");
  scanf("%d",&x1);
  printf("\n y1:");
  scanf("%d",&y1);
  printf("\n x2:");
  scanf("%d",&x2);
  printf("\n y2:");
  scanf("%d",&y2);

  //drawing initial line and window
  clearviewport();
  rectangle(Xwmin,Ywmin,Xwmax,Ywmax);
  line(x1,y1,x2,y2);
  getch();
  clearviewport();

  dx=x2-x1;
  dy=y2-y1;

  p[0]=-dx;
  p[1]=dx;
  p[2]=-dy;
  p[3]=dy;

  q[0]=x1-Xwmin;
  q[1]=Xwmax-x1;
  q[2]=y1-Ywmin;
  q[3]=Ywmax-y1;

  for(i=0;i<4;i++)
  {
     temp=q[i]/p[i];
    // printf("\n%d  %f",i,temp);
     if(p[i]==0)
     {
	 printf("\n Line is parallel to boundary");
     }
     else if(p[i]<0)
     {

	if(t1 < temp)
	{
	   printf("\n Hi");
	   getch();
	   t1=temp;
	}
     }
     else
     {
	if(t2 > temp)
	{
	  printf("\n HI");
	  getch();
	  t2=temp;
	}
     }
  }
 // printf("\n %f %f",t1,t2);
 // getch();
  if(t1>t2)
  {
    printf("\n Line cannot be clipped");
  }
  else
  {
	 newX1=int(x1+t1*dx);
	 newY1=int(y1+t1*dy);
	 newX2=int(x1+t2*dx);
	 newY2=int(y1+t2*dy);
  }
  clearviewport();
  getch();
  printf("\n The line after clipping is:");
  rectangle(Xwmin,Ywmin,Xwmax,Ywmax);
  line(newX1,newY1,newX2,newY2);
  getch();

}
