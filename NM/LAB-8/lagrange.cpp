//Lagrange interpolation

#include<iostream>

using namespace std;

class Lagrange
{
  private:
  float *x,*y,xP,yP;
  int n;
  public:
  Lagrange(int num=0,float givenX=0)
  {
    n=num;
    xP=givenX;
    x=new float[n];
    y=new float[n];
  }
  void GetValue()
  {
    cout<<endl<<"Enter the given values of x and y:";
    cout<<endl<<"Enter the values of x:";
    for(int i=0;i<n;i++)
    {
      cout<<endl<<"x"<<i<<":";
      cin>>x[i];
    }
    cout<<endl<<"Enter the values of y:";
    for(int i=0;i<n;i++)
    {
      cout<<endl<<"y"<<i<<":";
      cin>>y[i];
    }
  }

  void Calculation()
  {
    float sum=0;
    for(int i=0;i<n;i++)
    {
      float product=1;
      for(int j=0;j<n;j++)
      {
        if(i!=j)
        {
          product=product*((xP-x[j])/(x[i]-x[j]));
        }
      }
      sum=sum+product*y[i];
    }
    yP=sum;
  }
  void display()
  {
    cout<<endl<<"The value of y corresponding to given x("<<xP<<") is:"<<endl;
    cout<<"y("<<xP<<"):"<<yP;
  }
  ~Lagrange()
  {
      delete []x;
      delete []y;
  }
};

int main()
{
    int numData;
    float x;
    cout<<endl<<"Enter the number of data given:";
    cin>>numData;
    cout<<endl<<"Enter the given value of interpolating data xP:";
    cin>>x;
    Lagrange obj(numData,x);
    obj.GetValue();
    obj.Calculation();
    cout<<endl<<"The required answer is:"<<endl;
    obj.display();
    return 0;

}
