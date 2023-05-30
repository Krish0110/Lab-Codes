//Program with classes to represent a circle,rectangle and triangle
#include<iostream>
#include<cmath>
using namespace std;

class circle
{
private:
    float r;
    const float pi=3.1416;
public:
    void takedata()
    {
        cout<<"Enter the radius of the circle:"<<endl;
        cin>>r;
    }
    void displaydata()
    {
        float area,p;
        area=pi*r*r;
        p=2*pi*r;
        cout<<"The radius of the circle is "<<r<<endl;
        cout<<"The area of the circle with radius "<<r<<" is "<<area<<endl;
        cout<<"The perimeter of the circle with radius "<<r<<" is "<<p<<endl;
    }
};

class rectangle
{
private:
    float length,breadth;
public:
    void takedata()
    {
        cout<<"Enter the length and breadth of the rectangle:"<<endl;
        cin>>length;
        cin>>breadth;
    }
    void displaydata()
    {
        float area,p;
        area=length*breadth;
        p=2*(length+breadth);
        cout<<"The length and breadth of the rectangle is "<<length<<" and "<<breadth<<endl;
        cout<<"The area of the given rectangle is "<<area<<endl;
        cout<<"The perimeter of the given rectangle is "<<p<<endl;
    }
};

class triangle
{
private:
    float a,b,c;
public:
    void takedata()
    {
        cout<<"Enter the three sides of the triangle:"<<endl;
        cin>>a;
        cin>>b;
        cin>>c;
    }
    void displaydata()
    {
        float area,p;
        if((a+b)>c & (b+c)>a & (c+a)>b)
        {
             p=a+b+c;
             float s=p/2;
             area=sqrt(s*(s-a)*(s-b)*(s-c));
             cout<<"The sides of the triangle is "<<a<<" , "<<b<<" and "<<c<<endl;
             cout<<"The area of the given triangle is "<<area<<endl;
             cout<<"The perimeter of the given triangle is "<<p<<endl;
        }
        else
            cout<<"The triangle doesnot exist"<<endl;
    }
};

int main()
{
    circle c1;
    rectangle r1;
    triangle t1;
    c1.takedata();
    c1.displaydata();
    r1.takedata();
    r1.displaydata();
    t1.takedata();
    t1.displaydata();
}
