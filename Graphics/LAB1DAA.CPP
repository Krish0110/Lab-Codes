//DDA Algiorithm
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
float x0,y0,x1,y1,delX,delY,Xinc,Yinc,steps;
int k=0,xk,yk,xK1,yK1;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the initial two end points: \n");
printf("x0:");
scanf("%f",&x0);
printf("\n y0:");
scanf("%f",&y0);
printf("\n x1:");
scanf("%f",&
x1);
printf("\n y1:");
scanf("%f",&y1);
clearviewport();
delX=x1-x0;
delY=y1-y0;
if(fabs(delX)>fabs(delY))
{
steps=fabs(delX);
}
else
{
steps=fabs(delY);
}
Xinc=delX/steps;
Yinc=delY/steps;
xk=(int)x0;
yk=(int)y0;


for(k=0;k<(int)steps;k++)
{
putpixel(xk,yk,RED);
xK1=xk+(int)Xinc;
yK1=yk+(int)Yinc;
xk=xK1;
yk=yK1;
delay(100);
}
delay(1000);
//Table
clearviewport();
xk=(int)x0;
yk=(int)y0;

printf("\nk \t xk \t yk \t x(k+1) \t y(k+1)");
for(k=0;k<(int)steps;k++)
{
printf("\n%d \t %d \t %d \t %d \t %d",k,xk,yk,xK1,yK1);
xK1=xk+(int)Xinc;
yK1=yk+(int)Yinc;
xk=xK1;
yk=yK1;
delay(100);
}

delay(10000);
closegraph();
}


