//program to create class that stores three dimensional point

#include<iostream>
#include<cmath>

using namespace std;

class point
{
private:
    float x,y,z;
public:
    point(){};
    point(float first,float second,float third)
    {
        x=first;
        y=second;
        z=third;
    }
    friend point operator +(point a,point b);
    friend point operator -(point a,point b);
    void display()
    {
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
};

point operator +(point a,point b)
{
    point temp(a.x+b.x,a.y+b.y,a.z+b.z);
    return temp;
}

point operator -(point a,point b)
{
    point temp;
    temp.x=a.x-b.x;
    temp.y=a.y-b.y;
    temp.z=a.z-b.z;
    return temp;
}

int main()
{
    float x1,y1,z1,x2,y2,z2;
    cout<<"Enter the two points(three dimensional) that you want to conduct operation on:"<<endl;
    cout<<"First point:"<<endl;
    cin>>x1;
    cin>>y1;
    cin>>z1;
    point A(x1,y1,z1);

    cout<<"Second point:"<<endl;
    cin>>x2;
    cin>>y2;
    cin>>z2;
    point B(x2,y2,z2);

    cout<<"The given two points are:"<<endl;
    A.display();
    B.display();

    point added,subtracted;
    added=A+B;
    cout<<"The point obtained by adding given points is:"<<endl;
    added.display();

    subtracted=A-B;
    cout<<"The point obtained by subtracting given points is:"<<endl;
    subtracted.display();
    return 0;
}
