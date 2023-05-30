//Program to create base and derived class

#include<iostream>
using namespace std;

class person  //base class
{
protected:
    string name;
    int age;
public:
    void EnterName()
    {
        cout<<"Enter your name:"<<endl;
        cin>>name;
    }

    void EnterAge()
    {
        cout<<"Enter your age:"<<endl;
        cin>>age;
    }

    void printAddress()
    {
        cout<<"address:"<<this<<endl;
    }
};

class student:public person
{
private:
    int roll;
    char section;
public:
    void getdata()
    {
        person::EnterName();
        person::EnterAge();
    }
    void EnterRoll()
    {
        cout<<"Enter your roll number:"<<endl;
        cin>>roll;
    }

    void EnterSection()
    {
        cout<<"Enter your section:"<<endl;
        cin>>section;
    }

};

class employee:public person
{
private:
    float salary ;
    int working_hour;
public:
    void getdata()
    {
        person::EnterName();
        person::EnterAge();
    }
    void EnterSalary()
    {
        cout<<"Enter the salary of employee:"<<endl;
        cin>>salary;
    }

    void EnterWorkHour()
    {
        cout<<"Enter the working hour of employee"<<endl;
        cin>>working_hour;
    }

};

int main()
{
    person p1,p2;
    student s1,s2;
    employee e1,e2;

    //address of object
    cout<<"Address of person class object"<<endl;
    cout<<"The address of p1:"<<endl;
    p1.printAddress();
    cout<<"The address of p2:"<<endl;
    p2.printAddress();

    cout<<"Address of student class object"<<endl;
    cout<<"The address of s1:"<<endl;
    s1.printAddress();
    cout<<"The address of s2:"<<endl;
    s2.printAddress();

    cout<<"Address of employee class object"<<endl;
    cout<<"The address of e1:"<<endl;
    e1.printAddress();
    cout<<"The address of e2:"<<endl;
    e2.printAddress();

    //printing size of object
    cout<<"size of p1: "<<sizeof(p1)<<endl;
    cout<<"size of p2: "<<sizeof(p2)<<endl;
    cout<<"size of s1: "<<sizeof(s1)<<endl;
    cout<<"size of s2: "<<sizeof(s2)<<endl;
    cout<<"size of e1: "<<sizeof(e1)<<endl;
    cout<<"size of e2: "<<sizeof(e2)<<endl;

    return 0;
}
