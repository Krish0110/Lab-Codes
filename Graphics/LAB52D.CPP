//Translation, Scaling, Reflection,Rotation
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

const float pi=22/7;
void drawTriangle()
{
   line(100,100,200,50);
   line(200,50,300,50);
   line(300,50,100,100);
}
int X = 300;
int Y = 200;
void main()
{
  int gd=DETECT,gm;
  int select,x1,y1,x2,y2,x3,y3;
  int x11,y11,x12,y12;
  int tx,ty,Sx,Sy,theta;
  float rad;
  char c;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

  printf("\n Enter the starting and ending point of a line:");
  printf("\n (x1,y1):");
  printf("\n x1:");
  scanf("%d",&x1);
  printf("\n y1:");
  scanf("%d",&y1);
  printf("\n (x2,.y2):");
  printf("\n x2:");
  scanf("%d",&x2);
  printf("\n y2:");
  scanf("%d",&y2);

  line(x1+X,-y1+Y,x2+X,-y2+Y);

  printf("\n Available function:");
  printf("\n 1.Translation \n 2.Scaling \n 3.Rotation \n 4.Reflection");
  printf("\n Choose an option:");
  scanf("%d",&select);
  switch(select)
  {
     case 1:
       printf("\n Enter the translation vector(tx,ty):");
       printf("\n tx:");
       scanf("%d",&tx);
       printf("\n ty:");
       scanf("%d",&ty);

       //Translation
       line(x1+X+tx,-y1+Y+ty,x2+X+tx,-y2+Y+ty);
       break;

     case 2:
       printf("\n Enter the scaling Vector(Sx,Sy):");
       printf("\n Sx:");
       scanf("%d",&Sx);
       printf("\n Sy:");
       scanf("%d",&Sy);

       //Scaling
       line(x1*Sx+X,-y1*Sy+Y,x2*Sx+X,-y2*Sy+Y);
       break;

     case 3:
       printf("\n Enter the angle of rotation (Theta):");
       scanf("%d",&theta);
       rad=((pi)/180)*theta;
       printf("\n Rotation about origin:");
       x11=int(x1*cos(rad)-y1*sin(rad));
       y11=int(x1*sin(rad)+y1*cos(rad));
       x12=int(x2*cos(rad)-y2*sin(rad));
       y12=int(x2*sin(rad)+y2*cos(rad));
       line(x11+X,-y11+Y,x12+X,-y12+Y);
       break;

     case 4:
       printf("\n Choose reflection about x-axis or y-axis:");
       scanf(" %c",&c);
       if(c=='x' || c=='X')
       {
	  printf("\n Reflection about x-axis");
	  line(x1+X,y1+Y,x2+X,y2+Y);
       }
       else if(c=='y' || c=='Y')
       {
	  printf("\n Refelction about y-axis");
	  line(-x1+X,-y1+Y,-x2+X,-y2+Y);
       }
       else
       {
	  printf("\n Please enter valid option");
       }
       break;

     default:
       printf("\n Please enter availabe option");
       break;
  }
  //drawTriangle();
  delay(100);
  getch();
  closegraph();
}