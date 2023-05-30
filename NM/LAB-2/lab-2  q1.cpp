#include<iostream>

using namespace std;

class CurveFitting
{
    private:
    int n;
    float a,b;
    float *array_x,*array_y;
   // float array_x[10],array_y[10];(dynamic nagareko)
    public:
    CurveFitting(int num=0)
    {
        n=num;
        array_x=new float[n];
        array_y=new float[n];
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
            sumX=array_x[i]+sumX;
            sumY=array_y[i]+sumY;
            sumXY=(array_x[i]*array_y[i])+sumXY;
            sumX2=(array_x[i]*array_x[i])+sumX2;
        }

        float det,det1,det2;
        det=determinant(n,sumX,sumX,sumX2);
        det1=determinant(sumY,sumX,sumXY,sumX2);
        det2=determinant(n,sumY,sumX,sumXY);

        a=det1/det;
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
    }
};

int main()
{
    int number;
    cout<<"Enter the total number of given data n:";
    cin>>number;
    cout<<endl<<"The given equation of curve is: y=a+bx"<<endl;
    CurveFitting obj1(number);
    obj1.calculation();
    obj1.display();

    return 0;
}
