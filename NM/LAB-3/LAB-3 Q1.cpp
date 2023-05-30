//Newton Raphson Method

#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

class NewtonRaphson
{
    private:
    float x0,x1;
    public:
    NewtonRaphson(float initialVal)
    {
        x0=initialVal;
    }

    float function(float x)
    {
        return(x*exp(x)+x*x-1);
    }
    float derivativeFun(float x)
    {
        return(x*exp(x)+exp(x)+2*x-1);
    }
    float calculation()
    {
        int count=0;
        int iteration=100;
        float error=0.00005,calError,result;

        do
        {
            if(derivativeFun(x0)!=0)
            {
                  x1=x0-(function(x0)/derivativeFun(x0));
            }
            else
            {
                cout<<endl<<"The derivative of given  function is zero. So it has no solution."<<endl;
                exit (1);
            }
            calError=abs(x1-x0);
            x0=x1;
            count++;
            if(calError<=error)
            {
                result=x0;
                break;
            }
        }while(count<iteration);
        if(count<iteration)
            return result;
        else
        {
            cout<<endl<<"The function has no solution.(It is osilating)"<<endl;
            exit(1);
        }
    }
};

int main()
{
    float value;
    cout<<endl<<"Given function: f(x)=xe^x+x^2-1";

    cout<<endl<<"Enter the initial guess :"<<endl;
    cout<<"x0:";
    cin>>value;
    NewtonRaphson obj(value);
    float answer=obj.calculation();
    cout<<endl<<"The required root of given equation is:"<<answer;
    return 0;
}
