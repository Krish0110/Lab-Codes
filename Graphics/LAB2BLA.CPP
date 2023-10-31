//BLA for drawing line'
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

void main()
{
int gd=DETECT,gm;
float x0,y0,x1,y1,delX,delY,p0,pK;
int k,a,b,xK,yK;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

printf("\n Enter the two points given:");
printf("\n x0:");
scanf("%f",&x0);
printf("\n y0:");
scanf("%f",&y0);
printf("\n x1:");
scanf("%f",&x1);
printf("\n y1:");
scanf("%f",&y1);

delX=abs(x1-x0);
delY=abs(y1-y0);
clearviewport();
//Setting increment
if(x1>x0)
{
a=1;
}
else
{
a=-1;
}

if (y1>y0)
{
b=1;
}
else
{
b=-1;
}
xK=(int)x0;
yK=(int)y0;
//for m<=1
if(delX>=delY)
{
p0=2*delX-delY;
pK=p0;
for(k=0;k<=(int)delX;k++)
{
  putpixel(xK,yK,RED);
  delay(100);
  if(pK<=0)
  {
  xK=xK+a;
  pK=pK+2*delY;
  }
  else
  {
  xK=xK+a;
  yK=yK+b;
  pK=pK+2*delY-2*delX;
  }
}
}
else // m>1
{
p0=2*delX-delY;
pK=p0;
for(k=0;k<=(int)delY;k++)
{
putpixel(xK,yK,RED);
delay(100);
if(pK<=0)
{
yK=yK+b;
pK=pK+2*delX;
}
else
{
xK=xK+a;
yK=yK+b;
pK=pK+2*delX-2*delY;
}
}
}
closegraph();
}

