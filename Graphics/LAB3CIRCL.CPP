//Circle drawing algorithm
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm;
int h,k,r,pk,xk,yk;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the centre (h,k) of a circle:");
printf("\n h:");
scanf("%d",&h);
printf("\n k:");
scanf("%d",&k);
printf("Enter the radius of circle:\n r:");
scanf("%d",&r);
clearviewport();

pk=1-r;
xk=0;
yk=r;
do
{
  putpixel(xk+h,yk+k,RED);
  putpixel(-xk+h,yk+k,RED);
  putpixel(-xk+h,-yk+k,RED);
  putpixel(xk+h,-yk+k,RED);
  putpixel(yk+h,xk+k,RED);
  putpixel(-yk+h,xk+k,RED);
  putpixel(-yk+h,-xk+k,RED);
  putpixel(yk+h,-xk+k,RED);
  delay(100);
    if(pk<=0)
    {
    xk=xk+1;
    pk=pk+2*xk+1;
    }
    else
    {
    xk=xk+1;
    yk=yk-1;
    pk=pk+2*xk-2*yk+1;
    }
}while(xk<=yk);
closegraph();
}


