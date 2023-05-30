#include<iostream>
#include<cmath>

using namespace std;

class ODE
{
    private:
    float x0,y0,h,y1,xVal,yVal;
    public:
    ODE(float xInitial=0,float yInitial=0,float stepsize=0)
    {
        x0=xInitial;
        y0=yInitial;
        h=stepsize;
        xVal=xInitial;
        yVal=yInitial;
    }

    void SetToInitial()
    {
        x0=xVal;
        y0=yVal;
    }

    float function(float x,float y)
    {
        return (x*x+2*x-y);
    }

    float EullerMethod()
    {
        int count=0;
        cout<<endl<<"The calculated value of x and y are:"<<endl;
        cout<<endl<<"x \t y";
        cout<<endl<<"x"<<count<<":"<<x0<<" \t y"<<count<<":"<<y0;
        while((h*count)<1)
        {
            y1=y0+h*function(x0,y0);
            x0=x0+h;
            y0=y1;
            count++;
            cout<<endl<<"x"<<count<<":"<<x0<<" \t y"<<count<<":"<<y0;
        }
        return y1;
    }

    float RK2_Method()
    {
        SetToInitial();
         int count=0;
         float k1,k2,k;
        cout<<endl<<"The calculated value of x and y are:"<<endl;
        cout<<endl<<"x \t y";
        cout<<endl<<"x"<<count<<":"<<x0<<" \t y"<<count<<":"<<y0;
         while((count*h)<1)
         {

             k1=h*function(x0,y0);
             k2=h*function(x0+h,y0+k1);
             k=(k1+k2)/2;
             y1=y0+k;
             x0=x0+h;
             y0=y1;
             count++;
             cout<<endl<<"x"<<count<<":"<<x0<<" \t y"<<count<<":"<<y0;
         }
         return y1;
    }

    float RK4_Method()
    {
        SetToInitial();
         int count=0;
         float k1,k2,k3,k4,k;
        cout<<endl<<"The calculated value of x and y are:"<<endl;
        cout<<endl<<"x \t y";
        cout<<endl<<"x"<<count<<":"<<x0<<" \t y"<<count<<":"<<y0;
         while((count*h)<1)
         {

             k1=h*function(x0,y0);
             k2=h*function(x0+h/2,y0+k1/2);
             k3=h*function(x0+h/2,y0+k2/2);
             k4=h*function(x0+h,y0+k3);
             k=(k1+2*k2+2*k3+k4)/6;
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
    cout<<endl<<"Given equation: f(x)=x^2+2x-y"<<endl;
    cout<<endl<<"Enter the initial values given:"<<endl;
    cout<<endl<<"x0:";
    cin>>value1;
    cout<<endl<<"y0:";
    cin>>value2;
    cout<<endl<<"h:";
    cin>>value3;
    ODE obj(value1,value2,value3);

    cout<<endl<<"EULLER METHOD:";
    float answer=obj.EullerMethod();
    cout<<endl<<"The required answer is:"<<answer<<endl;

    cout<<endl<<"RK2 METHOD:";
    answer=obj.RK2_Method();
    cout<<endl<<"The required answer is:"<<answer<<endl;

    cout<<endl<<"RK4 METHOD:";
    answer=obj.RK4_Method();
    cout<<endl<<"The required answer is:"<<answer<<endl;

    return 0;
}

