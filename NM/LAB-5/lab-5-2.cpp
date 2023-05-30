//Gauss Eliminiation Method
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
    cout<<endl<<"Enter the coefficient of the given data:";
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n+1;j++)
       {
        cout<<endl<<"A"<<i+1<<j+1<<":";
        cin>>matrix[i][j];
       }
    }

    cout<<endl<<"The given linear equation is:";
    for(int i=0;i<n;i++)
    {
      cout<<endl;
      for(int j=0;j<n+1;j++)
      {
        if(j==n)
            cout<<matrix[i][j];
        else
        {
          if(j<n-1)
          {
              cout<<matrix[i][j]<<"x"<<j+1<<"+";
          }
          else
              cout<<matrix[i][j]<<"x"<<j+1<<"=";
        }
      }
    }
  }

  void elimination()
  {
    float temp;
    for(int j=0;j<n-1;j++)
    {
      if(abs(matrix[j][j])<=0.00005)
      {
        cout<<endl<<"The solution doesnot exist";
        exit(0);
      }
      for(int i=j+1;i<n;i++)
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
    x[n-1]=matrix[n-1][n]/matrix[n-1][n-1];
    for(int i=n-2;i>=0;i--)
    { 
      float sum=0;
      for(int j=i+1;j<n;j++)
      {
          sum=sum+matrix[i][j]*x[j];
      }
      x[i]=(matrix[i][n]-sum)/matrix[i][i];
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
    cout<<endl<<"Enter the size of array:";
    cin>>size;
    LAE obj(size);
    obj.GetCoefficient();
    obj.elimination();
    cout<<endl<<"The required answer is:";
    obj.display();
    return 0;
}