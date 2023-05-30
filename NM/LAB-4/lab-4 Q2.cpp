#include<iostream>
#include<cmath>

using namespace std;

class ODE
{
    private:
    float x0,y0,h,y1;
    public:
    ODE(float xInitial=0,float yInitial=0,float stepsize=0)
    {
        x0=xInitial;
        y0=yInitial;
        h=stepsize;
    }

    float slope(float x,float y)
    {
        return (x*x+y);
    }
   float RK2()
    {
         int count=0;
         float k1,k2,k;
        cout<<endl<<"The calculated value of x and y are:"<<endl;
        cout<<endl<<"x \t y";
        cout<<endl<<"x"<<count<<":"<<x0<<" \t y"<<count<<":"<<y0;
         while((count*h)<=1)
         {

             k1=h*slope(x0,y0);
             k2=h*slope(x0+h,y0+k1);
             k=(k1+k2)/2;
             y1=y0+k;
             x0=x0+h;
             y0=y1;
             count++;
             cout<<endl<<"x"<<count<<":"<<x0<<" \t y"<<count<<":"<<y0;
         }
         return y1;
    }

};

int main()
{
    float value1,value2,value3;
    cout<<endl<<"Given equation: f(x)=x^2+y^2"<<endl;
    cout<<endl<<"Enter the initial values given:"<<endl;
    cout<<endl<<"x0:";
    cin>>value1;
    cout<<endl<<"y0:";
    cin>>value2;
    cout<<endl<<"h:";
    cin>>value3;
    ODE obj(value1,value2,value3);
    float answer=obj.RK2();
    cout<<endl<<"The required answer is:"<<answer;

    return 0;
}
