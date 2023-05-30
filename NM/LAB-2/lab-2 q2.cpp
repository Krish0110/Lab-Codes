#include<iostream>
#include<cmath>

using namespace std;

class CurveFitting
{
    private:
    float *array_x,*array_y,*array_Y;
    int n;
    float a,b;
    //float array_x[10],array_y[10],array_Y[10];
    public:
    CurveFitting(int num=0)
    {
        n=num;
        array_x=new float[n];
        array_y=new float[n];
        array_Y=new float[n];
        cout<<endl<<"Enter the provided data:"<<endl;

        cout<<"Enter the value of given x-components:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"x["<<i<<"]:";
            cin>>array_x[i];
        }

        cout<<"Enter the value of given y-components:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"y["<<i<<"]:";
            cin>>array_y[i];
        }
        //array_x=new[int]
    }

    float determinant(float a,float b,float c,float d)
    {
        return((a*d)-(b*c));
    }

    void calculation()
    {
        float sumX=0,sumY=0,sumXY=0,sumX2=0;
        for(int i=0;i<n;i++)
        {
            array_Y[i]=log(array_y[i]);
        }
        for(int i=0;i<n;i++)
        {
            sumX=array_x[i]+sumX;
            sumY=array_Y[i]+sumY;
            sumXY=(array_x[i]*array_Y[i])+sumXY;
            sumX2=(array_x[i]*array_x[i])+sumX2;
        }

        float det,det1,det2;
        det=determinant(n,sumX,sumX,sumX2);
        det1=determinant(sumY,sumX,sumXY,sumX2);
        det2=determinant(n,sumY,sumX,sumXY);

        a=exp(det1/det);
        b=det2/det;

    }

    void display()
    {
        cout<<endl<<"The required value of unknowm variables are:"<<endl;
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
    }
        ~CurveFitting()
    {
        delete[]array_x;
        delete[]array_y;
        delete[]array_Y;
    }
};

int main()
{
    int number;
    cout<<"Enter the total number of given data n:";
    cin>>number;
    cout<<endl<<"The given equation of curve is: y=a*e^(b*x)"<<endl;
    CurveFitting obj1(number);
    obj1.calculation();
    obj1.display();

    return 0;
}

