#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

class BisectionMethod
{
    private:
    float a,b,func_a,func_b;
    public:
    BisectionMethod(float num1=0,float num2=0)
    {
        a=num1;
        b=num2;
    }
    float function(float x)
    {
        return (tan(x)+tanh(x));
    }
    float calculation()
    {
        float c;
        float error=0.0005;
        func_a=function(a);
        func_b=function(b);
        float n=(log(abs(b-a))-log(error))/log(2);
        if (func_a*func_b>0)
        {
            cout<<endl<<"Error!Values of both interval lies on same side";
            exit(0);
        }
        else if (func_a*func_b==0)
        {
            if(func_a==0)
            return a;
            else
            return b;
        }
        else if (func_a*func_b<0)
        {
            int count=0;
            do
            {
                c=(a+b)/2;
                if(function(c)*function(a)>0)
                a=c;
                else
                b=c;
                count++;
            }while(abs(function(c))>error && count<=2*n);
            return c;
        }
    }
};

int main()
{
    float a1,b1;

    cout<<"Enter the value of a and b:"<<endl;
    cout<<"a:";
    cin>>a1;
    cout<<"b:";
    cin>>b1;
    BisectionMethod ques1(a1,b1);
    cout<<"The given function is :x*sin(x)+cos(x)"<<endl;
    float answer=ques1.calculation();
    cout<<"The required root is :"<<answer;
    return 0;

}
