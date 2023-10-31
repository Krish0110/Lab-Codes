//Cohen Sutherland line clipping algorithm
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>

const int len=4;
int Xwmin,Ywmin,Xwmax,Ywmax;
void createRegionCode(char code[len],int x,int y)
{
    int i;
    for(i=0;i<len;i++)
    {
       code[i]='0';
    }
    if(x<Xwmin)
    {
	code[3]='1';
    }
    else if(x>Xwmax)
    {
	 code[2]='1';
    }

    if(y<Ywmin)
    {
	code[0]='1';
    }
    else if(y>Ywmax)
    {
	code[1]='1';
    }
}

int AND(char* A,char* B)
{
    int i,result=0;
    for(i=0;i<len;i++)
    {
	if(A[i]=='1' && B[i]=='1')
	{
	    result=1+result;
	}
	else
	{
	    result=0+result;
	}
    }
    return (result);
}

void Position(char* code,int* LR,int* TB)
{
   *LR=-1;
   *TB=-1;
   if(code[0]=='1')
   {
      *TB=1;
   }
   else if(code[1]=='1')
   {
      *TB=0;
   }
   if(code[3]=='1')
   {
      *LR=1;
   }
   else if(code[2]=='1')
   {
      *LR=0;
   }
}

int OR(char *A,char *B)
{
    int i,result=0;
    for(i=0;i<len;i++)
    {
	 if(A[i]=='0' && B[i]=='0')
	 {
	     result=0+result;
	 }
	 else
	 {
	     result=1+result;
	 }
    }
    return (result);
}

void main()
{
  int gd=DETECT,gm,andData;
  int x1,x2,y1,y2,orData,leftright,topbottom;
  int m;
  char *codeA,*codeB;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

  printf("Enter the two points for the window:");
  printf("\nXmin:");
  scanf("%d",&Xwmin);
  printf("\nYmin:");
  scanf("%d",&Ywmin);
  printf("\nXmax:");
  scanf("%d",&Xwmax);
  printf("\nYmax:");
  scanf("%d",&Ywmax);

  printf("Enter the two points of line:");
  printf("\nx1:");
  scanf("%d",&x1);
  printf("\ny1:");
  scanf("%d",&y1);
  printf("\nx2:");
  scanf("%d",&x2);
  printf("\ny2:");
  scanf("%d",&y2);

  //drawing initial line and window
  clearviewport();
  rectangle(Xwmin,Ywmin,Xwmax,Ywmax);
  line(x1,y1,x2,y2);
  getch();

while(1)
{
  createRegionCode(codeA,x1,y1);
  createRegionCode(codeB,x2,y2);

  //printf("\n %s %s",codeA,codeB);

  andData= AND(codeA,codeB);
  orData=OR(codeA,codeB);
  //printf("\n %d %d",andData,orData);
 // getch();
  //checking the cases
  if(orData==0)
  {
     printf("\nCompletely Inside");
     break;
  }
  else
  {
     clearviewport();
     rectangle(Xwmin,Ywmin,Xwmax,Ywmax);
     if(andData==0)
     {  if(x1!=x2)
	{
	  m=int((y2-y1)/(x2-x1));
	}
	printf("\nPartially In and Out");
	if(strcmp(codeA,"0000")!=0)
	{
	   Position(codeA,&leftright,&topbottom);
	   if(leftright==1)
	   {
	      y1=y1+int(m*(Xwmin-x1));
	      x1=Xwmin;
	   }
	   else if(leftright==0)
	   {
	      y1=y1+int(m*(Xwmax-x1));
	      x1=Xwmax;
	   }
	   if(topbottom==1)
	   {
	      x1=int(x1+(Ywmin-y1)*(x2-x1)/(y2-y1));
	      y1=Ywmin;
	   }
	   else if(topbottom==0)
	   {
	      x1=x1+int((Ywmax-y1)*(x2-x1)/(y2-y1));
	      y1=Ywmax;
	   }
	}
	if(strcmp(codeB,"0000")!=0)
	{
	   Position(codeB,&leftright,&topbottom);
	   if(leftright==1)
	   {
	      y2=y2+int(m*(Xwmin-x2));
	      x2=Xwmin;
	   }
	   else if(leftright==0)
	   {
	      y2=y2+m*(Xwmax-x2);
	      x2=Xwmax;
	   }
	   if(topbottom==1)
	   {
	      x2=x2+int((Ywmin-y2)*(x2-x1)/(y2-y1));
	      y2=Ywmin;
	   }
	   else if(topbottom==0)
	   {
	      x2=x2+int((Ywmax-y2)*(x2-x1)/(y2-y1));
	      y2=Ywmax;
	   }
	}
      //printf("\n %d %d",x2,y2);
	line(x1,y1,x2,y2);
     }
     else
     {
	printf("\nCompletely Out");
	break;
     }
  }
}
  //printf("\n hi");
  getch();
}

