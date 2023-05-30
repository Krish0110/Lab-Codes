//Numerical integration using trapezoidal rule, simpson's 1/3 rule and simpson's 3/8 rule

#include<iostream>
#include<cmath>

using namespace std;

class Numerical_Integration
{
private:
    int n;
    float a,b,h,*x,*y,sum;
public:
    Numerical_Integration(int num,float val_a,float val_b)
    {
        n=num;
        a=val_a;
        b=val_b;
        x=new float[n];
        y=new float[n];
    }

    float function(float x)
    {
        return(sin(x)-log(x)+exp(x));
    }

    void Data_Assignment()
    {
        h=(b-a)/n;
        for(int i=0;i<=n;i++)
        {
            if(i==0)
                x[i]=a;
            else if(i==n)
                x[i]=b;
            else
                x[i]=x[i-1]+h;

            y[i]=function(x[i]);
        }
    }

    float Trapezoidal()
    {
        sum=0;
        Data_Assignment();

        float integrated_value;

        for(int i=0;i<=n;i++)
        {
            if(i==0||i==n)
                sum+=y[i];
            else
                sum+=2*y[i];
        }

        integrated_value=(h/2)*sum;
        return integrated_value;
    }

    float Simpson_OneByThree()
    {
        sum=0;
        float answer;

        Data_Assignment();
        for(int i=0;i<=n;i++)
        {
            if(i==0||i==n)
                sum+=y[i];
            else if(i%2==0)
                sum+=2*y[i];
            else if(i%2!=0)
                sum+=4*y[i];
        }

        answer=(h/3)*sum;
        return answer;
    }

    float Simpson_ThreeByEight()
    {
        sum=0;
        Data_Assignment();
        float answer;

        for(int i=0;i<=n;i++)
        {
            if(i==0||i==n)
                sum+=y[i];
            else if(i%3==0)
                sum+=2*y[i];
            else if(i%3!=0)
                sum+=3*y[i];
        }
        answer=(3*h/8)*sum;
        return answer;
    }

    ~Numerical_Integration()
    {
        delete []x;
        delete []y;
    }
};

int main()
{
    int data_num;
    float val1,val2;
    cout<<endl<<"Enter the number of sub interval given:";
    cout<<endl<<"n:";
    cin>>data_num;
    cout<<endl<<"Enter the given interval:";
    cout<<endl<<"Initial point a:";
    cin>>val1;
    cout<<endl<<"Final point b:";
    cin>>val2;

    cout<<endl<<"The given function is : y=f(x)=sinx-logx+e^x"<<endl;
    Numerical_Integration obj1(data_num,val1,val2);

    cout<<endl<<"The value of integration of given function f(x) within the interval ("<<val1<<","<<val2<<") with "<<data_num<<" sub-interval is:"<<endl;

    //Trapezoidal rule
    float answer1=obj1.Trapezoidal();
    cout<<endl<<"The answer obtained using Trapezoidal rule is:"<<answer1<<endl;

    float answer2=obj1.Simpson_OneByThree();
    cout<<endl<<"The answer obtained using Simpson's 1/3 rule is:"<<answer2<<endl;

     float answer3=obj1.Simpson_ThreeByEight();
    cout<<endl<<"The answer obtained using Simpson's 3/8 rule is:"<<answer3<<endl;

    return 0;
}
