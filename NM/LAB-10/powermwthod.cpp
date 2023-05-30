//calculation of eigen value and vector using power method

#include<iostream>
#include<cmath>

using namespace std;
const int size=10;
class PowerMethod
{
private:
    int n;
    float *X,*Y,*D,*Z,A[10][10],Zmax,Dmax,eValue;
    float error=0.0005;
public:
    PowerMethod(int num)
    {
        n=num;
        X=new float[n];
        Y=new float[n];
        D=new float[n];
        Z=new float[n];
    }

    void GetData()
    {
        cout<<endl<<"Enter the data of given matrix of "<<n<<" x "<<n<<" order:";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<endl<<"A"<<i+1<<j+1<<":";
                cin>>A[i][j];
            }
        }

        cout<<endl<<"Enter the initial guess matrix of order "<<n<<" x 1 order:";
        for(int i=0;i<n;i++)
        {
            cout<<endl<<"X"<<i+1<<":";
            cin>>X[i];
        }
    }

    void MatrixMultiplication()
    {
        for(int i=0;i<n;i++)
        {
            Z[i]=0;
            for(int j=0;j<n;j++)
            {
                Z[i]+=A[i][j]*X[j];
            }
        }
    }
    float FindMax(float *Matrix)
    {
        float maxData=Matrix[0];
        for (int i=0;i<n;i++)
        {
            if(abs(maxData)<abs(Matrix[i]))
                maxData=Matrix[i];
            else
                continue;
        }

        return abs(maxData);
    }

    void Calculation()
    {
        Dmax=error;
        while(abs(Dmax)>=error)
        {
        MatrixMultiplication();
        Zmax=FindMax(Z);

        //dividing by max number
        for(int i=0;i<n;i++)
        {
            Y[i]=Z[i]/Zmax;
        }

        //finding difference
        for(int i=0;i<n;i++)
        {
            D[i]=Y[i]-X[i];
        }

        Dmax=FindMax(D);
       // cout<<endl<<Dmax;

        for(int i=0;i<n;i++)
        {
            X[i]=Y[i];
        }

        }
        eValue=Zmax;
    }

    void display()
    {
        cout<<endl<<"The required output is:"<<endl;
        cout<<endl<<"Eigen value is:"<<eValue;

        cout<<endl<<"Eigen vector is:";
        for(int i=0;i<n;i++)
        {
            cout<<endl<<"X"<<i+1<<":"<<X[i];
        }
    }

    ~PowerMethod()
        {
            delete []X;
            delete []Y;
            delete []Z;
            delete []D;
        }
};

int main()
{
    int order;
    cout<<endl<<"Enter the order of given matrix:";
    cin>>order;
    PowerMethod obj(order);
    obj.GetData();
    obj.Calculation();
    obj.display();

    return 0;
}
