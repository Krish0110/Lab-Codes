//Solving the polynomial equation using least square method

#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;
const int Size=20;
class LeastSquare
{
    private:
    int n,d;
    float *x,*y,A[Size][Size],*C;
    public:
    LeastSquare(int num=0,int deg=0)
    {
        n=num;
        d=deg;
        x=new float[n];
        y=new float[n];
        C=new float[d+1];
    }

    void GetValue()
    {
        cout<<endl<<"Enter the given datas:"<<endl;
        cout<<endl<<"Enter the given values of x:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<endl<<"x"<<i+1<<":";
            cin>>x[i];
        }
        cout<<endl<<"Enter the given values of y:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<endl<<"y"<<i+1<<":";
            cin>>y[i];
        }
    }

    void MatrixFormation()
    {
        if(d<0 && d>n)
        {
            throw("Solution doesnot exist");
        }
        for(int i=0;i<=d;i++)
        {
            for(int j=0;j<=d;j++)
            {
                float sum=0;
                for(int k=0;k<n;k++)
                {
                    sum=sum+pow(x[k],(i+j));
                }
                A[i][j]=sum;
                //cout<<endl<<"A"<<i+1<<j+1<<"="<<A[i][j];
            }

            float sum=0;
            for(int k=0;k<n;k++)
            {
                sum=sum+(pow(x[k],i)*y[k]);
            }
            A[i][d+1]=sum;
            //cout<<endl<<"A"<<i+1<<d+1<<"="<<A[i][d+1];
        }
    }

    void GaussJordan()
    {
        float temp;
        for(int j=0;j<=d;j++)
        {
            if(abs(A[j][j])<=0.0005)
                throw("Solution does not exist");
            for(int i=0;i<=d;i++)
            {
                if(i!=j)
                {
                    temp=A[i][j]/A[j][j];
                }

                for(int k=0;k<=d+1;k++)
                {
                    A[i][k]=A[i][k]-temp*A[j][k];
                }
            }
        }

        for(int i=0;i<=d;i++)
        {
            C[i]=A[i][d+1]/A[i][i];
        }
    }

    void display()
    {
        cout<<endl<<"The required value of constants are:";
        for(int i=0;i<=d;i++)
        {
            cout<<endl<<"C"<<i<<"="<<C[i];
        }
    }
    ~LeastSquare()
    {
        delete []x;
        delete []y;
        delete []C;
    }
};

int main()
{
    int dataSize,degree;
    cout<<endl<<"Enter the number of data given for x and y:";
    cin>>dataSize;
    cout<<endl<<"Enter the degree of given equation:";
    cin>>degree;
    LeastSquare obj(dataSize,degree);
    cout<<endl<<"The given polynomial equation is:"<<endl;
    cout<<"y = C"<<0;
    for(int i=1;i<=degree;i++)
    {
          cout<<" + ";
          cout<<" C"<<i<<" x^"<<i;
    }

try{
    obj.GetValue();
    obj.MatrixFormation();
    obj.GaussJordan();
    obj.display();
}

catch(const char * error)
{
    cout<<endl<<error;
}
   return 0;
}
