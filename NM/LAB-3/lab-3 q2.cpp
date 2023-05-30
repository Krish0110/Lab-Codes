//secant method
#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

class SecantMethod
{
    private:
    float a,b,c;
    public:
    SecantMethod(float num1,float num2)
    {
        a=num1;
        b=num2;
    }
    float function(float x)
    {
           return(x*exp(x)+x*x-1);
    }
    float calculation()
    {
        float error=0.00005,result;
        int iteration=100,count=0;
        do{
            if((function(b)-function(a))!=0)
            {
                c=(a*function(b)-b*function(a))/(function(b)-function(a));
            }
            else
            {
                cout<<endl<<"The roots does not exist"<<endl;
                exit (1);
            }
            if(function(a)*function(c)<0)
                b=c;
            else
                a=c;

            count++;
            if((abs(function(c))<=error))
            {
                result=c;
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
    float valueA,valueB;
    cout<<endl<<"The given function is: f(x)=xe^x+x^2-1";

    cout<<endl<<"Enter the initial gussess:";
    cout<<endl<<"a:";
    cin>>valueA;
    cout<<endl<<"b:";
    cin>>valueB;
    SecantMethod obj(valueA,valueB);
    float answer=obj.calculation();
    cout<<endl<<"The required root of given equation is:"<<answer;
    return 0;

}
