//Flood filling algorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void flood(int x,int y, int fill, int def)
{
    if(getpixel(x,y)==def)
    {
       delay(10);
       putpixel(x,y,fill);
       flood(x+1,y,fill,def);
       flood(x-1,y,fill,def);
       flood(x,y+1,fill,def);
       flood(x,y-1,fill,def);
       flood(x+1,y+1,fill,def);
       flood(x+1,y-1,fill,def);
       flood(x-1,y+1,fill,def);
       flood(x-1,y-1,fill,def);
    }
}
void main()
{
 int gd=DETECT,gm;
 int x1,x2,y1,y2;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 printf("\n Enter the two points of the rectangle:");
 printf("\n x1:");
 scanf("%d",&x1);
 printf("\n y1:");
 scanf("%d",&y1);
 printf("\n x2:");
 scanf("%d",&x2);
 printf("\n y2:");
 scanf("%d",&y2);
 rectangle(x1,y1,x2,y2);
 flood(x1+2,y1+2,10,0);
 getch();
}