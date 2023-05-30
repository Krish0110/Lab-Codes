//program to compare two objects of a class

#include<iostream>
#include<cmath>

using namespace std;

class compare
{
private:
    int data;
public:
    compare(){};
    compare(int x)
    {
        data=x;
    }

    bool operator ==(compare a)
    {
        if(data==a.data)
          cout<<"The given two numbers "<<data<<" and "<<a.data<<" are equal"<<endl;
        else
          cout<<"The given two numbers "<<data<<" and "<<a.data<<" are not equal"<<endl;
    }

    bool operator <(compare a)
    {
        if(data<a.data)
           cout<<"The given number "<<data<<" is less than "<<a.data<<endl;
        else
           cout<<"The given number"<<data<<" is not less than "<<a.data<<endl;

    }
    bool operator !=(compare a)
    {
        if(data!=a.data)
          cout<<"The given two numbers "<<data<<" and "<<a.data<<" are not equal"<<endl;
        else
          cout<<"The given two numbers "<<data<<" and "<<a.data<<" are  equal"<<endl;
    }
    bool operator >(compare a)
    {
        if(data>a.data)
           cout<<"The given number "<<data<<" is greater than "<<a.data<<endl;
        else
           cout<<"The given number"<<data<<" is not greater than "<<a.data<<endl;
    }
    bool operator <=(compare a)
    {
        if(data<=a.data)
           cout<<"The given number "<<data<<" is less than or equal to "<<a.data<<endl;
        else
           cout<<"The given number"<<data<<" is not less than or equal to "<<a.data<<endl;
    }
    bool operator >=(compare a)
    {
        if(data>=a.data)
           cout<<"The given number "<<data<<" is greater than or equal to "<<a.data<<endl;
        else
           cout<<"The given number"<<data<<" is not greater than or equal to "<<a.data<<endl;
    }
};
int main()
{
    int num1,num2;
    cout<<"Enter two integers that you want to compare:"<<endl;
    cin>>num1;
    cin>>num2;
    compare c1(num1),c2(num2);
    c1==c2;
    c1<c2;
    c1!=c2;
    c1>c2;
    c1<=c2;
    c1>=c2;

    return 0;
}

