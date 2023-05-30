//Numerical integration using trapezoidal rule when data is given

#include<iostream>
#include<cmath>

using namespace std;

class Numerical_Integration
{
private:
    float *x,*y,sum,h,a,b;
    int n;
public:
    Numerical_Integration(int num)
    {
        n=num;
        x=new float[n];
        y=new float[n];
    }

    void GetData()
    {
        cout<<endl<<"Enter the given values for x and y:";
        cout<<endl<<"Values of x:";
        for(int i=0;i<=n;i++)
        {
            cout<<endl<<"X"<<i<<":";
            cin>>x[i];
        }

        cout<<endl<<"Values of y:";
        for(int i=0;i<=n;i++)
        {
            cout<<endl<<"Y"<<i<<":";
            cin>>y[i];
        }
        a=x[0];
        b=x[n];
    }

    float Trapezoidal()
    {
        sum=0;
        float answer;
        h=(b-a)/n;

        for(int i=0;i<=n;i++)
        {
            if(i==0||i==n)
                sum+=y[i];
            else
                sum+=2*y[i];
        }
        answer=(h/2)*sum;

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
    int interval;
    cout<<endl<<"Enter the value of given sub-interval n:";
    cin>>interval;

    Numerical_Integration obj(interval);

    obj.GetData();

    float answer=obj.Trapezoidal();

    cout<<endl<<"Integration using Trapezoidal Rule:";
    cout<<endl<<"The obtained value after integrating the function within given range of data is:"<<answer;

    return 0;
}
