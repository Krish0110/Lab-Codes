//Gauss Jordan Method
#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

class LAE
{
    private:
    float matrix[10][10],*x;
    int n;
    public:
   LAE(int num)
   {
        n=num;
        x=new float[num];
    }
    void GetCoefficient()
    {
        cout<<endl<<"Enter the coefficient of given data:";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                cout<<endl<<"A"<<i+1<<j+1<<":";
                cin>>matrix[i][j];
            }
        }

        cout<<endl<<"The given system of linear equation is:";
        for(int i=0;i<n;i++)
        {
            cout<<endl;
            for(int j=0;j<(n+1);j++)
            {
                if(j==n)
                {
                    cout<<matrix[i][j];
                }
                else
                {
                    if(j<n-1)
                      cout<<matrix[i][j]<<"x"<<j+1<<"+";
                    else
                    cout<<matrix[i][j]<<"x"<<j+1<<"=";
                }
            }
        }
    }

    void jordon()
    {
        float temp;
        for(int j=0;j<n;j++)
        {
            if(abs(matrix[j][j])<=0.00005)
            {
                cout<<endl<<"Solution doesnot exist";
                exit(0);
            }
            for(int i=0;i<n;i++)
            {
                if(i!=j)
                {
                    temp=matrix[i][j]/matrix[j][j];
                    for(int k=0;k<n+1;k++)
                    {
                        matrix[i][k]=matrix[i][k]-temp*matrix[j][k];
                    }
                 }
            }

        }
        for(int i=0;i<n;i++)
        {
            x[i]=matrix[i][n]/matrix[i][i];
        }
    }

    void display()
    {
        for(int i=0;i<n;i++)
        {
            cout<<endl<<"x"<<i+1<<":"<<x[i];
        }
    }
    ~LAE()
    {
        delete []x;
    }

};

int main()
{
    int size;
    cout<<endl<<"Enter the number of equations present in the system:";
    cin>>size;
    LAE obj(size);
    obj.GetCoefficient();
    obj.jordon();
    cout<<endl<<"The required answer is:";
    obj.display();
    return 0;
}
