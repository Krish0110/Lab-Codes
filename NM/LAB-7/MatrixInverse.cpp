//Inversion of matrix using Gauss Jordon Method

#include<iostream>
#include<cstring>

using namespace std;

class matrix
{
  private:
  int n;
  float A[10][10];
  public:
  matrix(int order=0)
  {
      n=order;
  }

  void GetMatrix()
  {
    cout<<endl<<"Enter the coefficient of given matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
          cout<<endl<<"A"<<i+1<<j+1<<":";
          cin>>A[i][j];
      }
    }
  }

  void AugmentedMatrix()
  {
    for(int i=0;i<n;i++)
    {
      for(int j=n;j<2*n;j++)
      {
         if(j==(i+n))
          {
            A[i][j]=1;
          }
          else
          {
            A[i][j]=0;
          }
      }
    }
  }
  void inverseCalculation()
  {
    AugmentedMatrix();
    float temp;
    //Row Operation
    for(int j=0;j<n;j++)
    {
      if(abs(A[j][j])<=0.0005)
          throw("Solution does not exist");
      for(int i=0;i<n;i++)
      {
        if(i!=j)
        {
           temp=A[i][j]/A[j][j];
           for(int k=0;k<2*n;k++)
           {
               A[i][k]=A[i][k]-temp*A[j][k];
           }
        }
      }
    }
    for(int i=0;i<n;i++)
    {
      float temp=A[i][i];
      for(int j=0;j<2*n;j++)
      {
        A[i][j]=A[i][j]/temp;
      }
    }
    //display();
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        A[i][j]=A[i][j+n];
      }
    }
  }

  void display()
  {
    for(int i=0;i<n;i++)
    {
      cout<<endl;
      for(int j=0;j<n;j++)
      {
        cout<<A[i][j]<<"\t";
      }
    }
  }
};

int main()
{
  try{
  int numOrder;
  cout<<endl<<"Enter the order of the given matrix:";
  cin>>numOrder;
  matrix obj(numOrder);
  obj.GetMatrix();
  cout<<endl<<"The given matrix is:";
  obj.display();
  obj.inverseCalculation();
  cout<<endl<<"The inverse of given matrix is:";
  obj.display();
  }
  catch(const char* error)
  {
    cout<<error;
  }
  return 0;

}
