//Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle.
//Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.

#include<iostream>
#include<typeinfo>

using namespace std;

class vehicle
{
protected:
    string name;
public:
    vehicle(string n="Vehicle"):name(n){}
    virtual void display()
    {
        cout<<"Name of vehicle:"<<name<<endl;
    }
    virtual ~vehicle()
    {
        cout<<"Destructor of vehicle"<<endl;
    }
};

class bus:public vehicle
{
protected:
    int passenger_no;
public:
    bus(int p=0,string n="BUS")
    {
        passenger_no=p;
        name=n;
    }
    void display()
    {
        cout<<"Name of Bus:"<<name<<endl;
        cout<<"No of person that can be accomodated:"<<passenger_no<<endl;
    }
    ~bus()
    {
        cout<<"Destructor of bus"<<endl;
    }
};
class car:public vehicle
{
protected:
    int passenger_no;
public:
    car(int p=0,string n="car")
    {
        passenger_no=p;
        name=n;
    }
    void display()
    {
        cout<<"Name of car:"<<name<<endl;
        cout<<"No of person that can be accomodated:"<<passenger_no<<endl;
    }
    ~car()
    {
        cout<<"Destructor of car"<<endl;
    }
};
class bike:public vehicle
{
protected:
    int passenger_no;
public:
    bike(int p=0,string n="bike")
    {
        passenger_no=p;
        name=n;
    }
    void display()
    {
        cout<<"Name of Bike:"<<name<<endl;
        cout<<"No of person that can be accomodated:"<<passenger_no<<endl;
    }
    ~bike()
    {
        cout<<"Destructor of bike"<<endl;
    }
};

int main()
{
    vehicle *vec[3];
    string s1;
    int n1;
    cout<<"Enter the name of bus:";
    cin>>s1;
    cout<<"Enter the no of passenger:";
    cin>>n1;

    bus obj_bus(n1,s1),*p_bus;
    car obj_car(5,"BMW"),*p_car;
    bike obj_bike(2,"ROYAL"),*p_bike;

    vec[0]=&obj_bus;
    vec[1]=&obj_car;
    vec[2]=&obj_bike;

    p_bus=dynamic_cast<bus*>(vec[0]);
    p_car=dynamic_cast<car*>(vec[1]);
    p_bike=dynamic_cast<bike*>(vec[2]);

    cout<<"Value stored in pointer object of each class:"<<endl;
    p_bus->display();
    cout<<"Type id:"<<typeid(*p_bus).name()<<endl;
    p_car->display();
    cout<<"Type id:"<<typeid(*p_car).name()<<endl;
    p_bike->display();
    cout<<"Type id:"<<typeid(*p_bike).name()<<endl;

    cout<<"Value stored in pointer of base class:"<<endl;
    for(int i=0;i<3;i++)
        {
            vec[i]->display();
            cout<<"Type id:"<<typeid(*vec[0]).name()<<endl;
        }

     return 0;

}
