//Create a class Person and two derived classes Employee and Student, inherited from class Person.
//Now create a class Manager which is derived from two base classes Employee and Student. Show the use of the virtual base class.

#include<iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    void get_name()
    {
        cout<<"Enter your name:";
        cin>>name;
    }

    void get_age()
    {
        cout<<endl<<"Enter your age:";
        cin>>age;
    }
    void showdata()
    {
        cout<<"This is from base class Person"<<endl;
    }
};

class student:virtual public Person
{
protected:
    int roll;
public:
    void get_data()
    {
        Person::get_name();
        Person::get_age();
    }
    void get_roll()
    {
        cout<<endl<<"Enter your roll no:";
        cin>>roll;
    }
};

class employee:virtual public Person
{
protected:
    int salary;
public:
    void get_data()
    {
        Person::get_name();
        Person::get_age();
    }
    void get_salary()
    {
        cout<<endl<<"Enter your salary:";
        cin>>salary;
    }
};

class manager:public student,public employee{};

int main()
{
    manager m;
    m.get_name();
    m.get_roll();
    m.get_age();
    m.get_salary();
    m.showdata();

    return 0;

}
