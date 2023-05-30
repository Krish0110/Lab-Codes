//program to create class for instanting object that represent two dimensional cartesian product

#include<iostream>
#include<cmath>

using namespace std;
class cartesian;
class operation;

class addition
{
public:
    cartesian add(cartesian a,cartesian b);
};

class cartesian
{
private:
    float x,y;
public:
    cartesian (){};
    cartesian(float first,float second)
    {
        x=first;
        y=second;
    }
    friend cartesian addition::add(cartesian a,cartesian b);
    friend class operation;
    void display()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

cartesian addition::add(cartesian a,cartesian b)
{
    cartesian temp(a.x+b.x,a.y+b.y);
    return temp;
}

class operation
{
public:
    cartesian sub(cartesian a,cartesian b)
    {
        cartesian temp(a.x-b.x,a.y-b.y);
        return temp;
    }

    cartesian mul(cartesian a,cartesian b)
    {
        cartesian temp(a.x*b.x,a.y*b.y);
        return temp;
    }
    cartesian div(cartesian a,cartesian b)
    {
        cartesian temp(a.x/b.x,a.y/b.y);
        return temp;
    }

};

int main()
{
    float x1,y1,x2,y2;
    cout<<"Enter the two points that you want to conduct operation on:"<<endl;
    cout<<"First point:"<<endl;
    cin>>x1;
    cin>>y1;
    cartesian A(x1,y1);
    cout<<"Second point:"<<endl;
    cin>>x2;
    cin>>y2;
    cartesian B(x2,y2);
    cout<<"The given two points are:"<<endl;
    A.display();
    B.display();
    addition adding;
    operation operating;

    cartesian a=adding.add(A,B);
    cout<<"The point obtained by adding given points is:"<<endl;
    a.display();

    cartesian s=operating.sub(A,B);
    cout<<"The point obtained by subtracting given points is:"<<endl;
    s.display();

    cartesian m=operating.mul(A,B);
    cout<<"The point obtained by multiplying given points is:"<<endl;
    m.display();

    cartesian d=operating.div(A,B);
    cout<<"The point obtained by dividing given points is:"<<endl;
    d.display();
    return 0;
}
