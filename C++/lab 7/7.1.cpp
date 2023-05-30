//Write a program to create a class shape with functions to find the area of the shapes and
//display the names of the shapes and other essential components of the class.
//Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display().
//Write a suitable program to illustrate virtual functions and virtual destructors.

#include<iostream>
#include<cmath>

using namespace std;

const float pi=3.14159;
class shape
{
protected:
    float shape_area;
    string shape_name;
public:
    shape(string s="shape",float a=0):shape_name(s),shape_area(a){}
    virtual float area()
    {
        return shape_area;
    }

    virtual string display_name()
    {
        return shape_name;
    }

    virtual ~shape()
    {
        cout<<"THE DESTRUCTOR OF CLASS SHAPE IS CALLED"<<endl;
    }
};

class rectangle:public shape
{
private:
    float length,breadth;
public:
    rectangle(float l=0,float b=0,string s="Recatangle")
    {
        length=l;
        breadth=b;
        shape_name=s;
    }
    float area()
    {
        shape_area=length*breadth;
        return shape_area;
    }

    string display_name()
    {
        return shape_name;
    }
    ~rectangle()
    {
        cout<<"The destructor of rectangle"<<endl;
    }
};

class trapezoid:public shape
{
private:
    float baseA,baseB,height;
public:
    trapezoid(float a=0,float b=0,float h=0,string s="Trapezoid")
    {
        baseA=a;
        baseB=b;
        height=h;
        shape_name=s;
    }
    float area()
    {
        shape_area=((baseA+baseB)/2)*height;
        return shape_area;
    }

    string display_name()
    {
        return shape_name;
    }
    ~trapezoid()
    {
        cout<<"The destructor of trapezoid"<<endl;
    }
};

class circle:public shape
{
private:
    float radius;
public:
    circle(float r=0,string s="Circle"):radius(r)
    {
        shape_name=s;
    }
    float area()
    {
        shape_area=pi*radius*radius;
        return shape_area;
    }

    string display_name()
    {
        return shape_name;
    }
    ~circle()
    {
        cout<<"The destructor of circle"<<endl;
    }
};

int main()
{
    shape *ptr;
    float r1;
    string s1;
    cout<<"FOR CIRCLE:"<<endl;
    cout<<"Enter the name of the circular object and its radius:"<<endl;
    cout<<"Name:";
    cin>>s1;
    cout<<"Radius:";
    cin>>r1;
    ptr=new circle(r1,s1);
    cout<<endl<<"Name of shape:"<<ptr->display_name()<<endl;
    cout<<"Area of shape:"<<ptr->area()<<endl;
    delete(ptr);

    cout<<endl<<"FOR RECTANGLE:"<<endl;
    ptr=new rectangle(8,12,"Chocolate");
    cout<<"Name of shape:"<<ptr->display_name()<<endl;
    cout<<"Area of shape:"<<ptr->area()<<endl;
    delete(ptr);

    cout<<endl<<"FOR TRAPEZOID:"<<endl;
    ptr=new trapezoid(2,4,8);
    cout<<"Name of shape:"<<ptr->display_name()<<endl;
    cout<<"Area of shape:"<<ptr->area()<<endl;
    delete(ptr);

    return 0;

}
