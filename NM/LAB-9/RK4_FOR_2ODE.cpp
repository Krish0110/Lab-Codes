//SOLUTION OF SECOND ORDER DIFFERENTIAL EQUATION USING RK4

#include<iostream>
#include<cmath>

using namespace std;

class ODE
{
   private:
       float x0,y0,z0,y1,z1,h;
   public:
    ODE(float xInitial=0,float yInitial=0,float zInitial=0,float stepsize=0)
    {
        x0=xInitial;
        y0=yInitial;
        z0=zInitial;
        h=stepsize;
    }

    float function_f(float x,float y,float z)  //dy/dx
    {
        return z;
    }

    float function_g(float x,float y,float z)   //dz/dx(d"y/dx)
    {
        return((6*x+z*z)/10);
    }

    float RK4()
    {
        int count=0;
        float k1,k2,k3,k4,k=0,l1,l2,l3,l4,l=0;
        cout<<endl<<"The calculated value of x, y and z are:"<<endl;
        cout<<endl<<"x \t\t y \t\t z";

        while((count*h)<=1)
        {
            y1=y0+k;
            z1=z0+l;

            y0=y1;
            z0=z1;
            cout<<endl<<"x"<<count<<":"<<x0<<" \t\t y"<<count<<":"<<y0<<" \t\t z"<<count<<":"<<z0;
            k1=h*function_f(x0,y0,z0);
            l1=h*function_g(x0,y0,z0);
            k2=h*function_f(x0+h/2,y0+k1/2,z0+l1/2);
            l2=h*function_g(x0+h/2,y0+k1/2,z0+l1/2);
            k3=h*function_f(x0+h/2,y0+k2/2,z0+l2/2);
            l3=h*function_g(x0+h/2,y0+k2/2,z0+l2/2);
            k4=h*function_f(x0+h,y0+k3,z0+l3);
            l4=h*function_g(x0+h,y0+k3,z0+l3);

            k=(k1+2*k2+2*k3+k4)/6;
            l=(l1+2*l2+2*l3+l4)/6;

             x0=x0+h;
            count++;
            //cout<<endl<<"x"<<count<<":"<<x0<<" \t y"<<count<<":"<<y0<<" \t z"<<count<<":"<<z0;
        }
        return y1;
    }

};

int main()
{
    float value1,value2,value3,value4;
    cout<<endl<<"Given equation:  y''+2y'-3y=6x"<<endl;
    cout<<endl<<"Enter the initial values given:"<<endl;
    cout<<endl<<"x0:";
    cin>>value1;
    cout<<endl<<"y0:";
    cin>>value2;
    cout<<endl<<"y'(0)=z0:";
    cin>>value3;
    cout<<endl<<"h:";
    cin>>value4;

    ODE obj(value1,value2,value3,value4);
    float answer=obj.RK4();
    cout<<endl<<"The required value of y is:"<<answer;

    return 0;
}
