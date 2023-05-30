//Write a program with an abstract class Student and create derive classes Engineering, Medicine and Science from base class Student.
//Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.

#include<iostream>
using namespace std;

class student
{
protected:
    string name;
    string major_subject;
public:
    student(string n="name",string m="major"):name(n),major_subject(m){}
    virtual void showdata()=0;
    virtual ~student()
    {
        cout<<"Destructor of student"<<endl;
    }
};

class engineering:public student
{
public:
    engineering(string n="name",string m="Engineering")
    {
        name=n;
        major_subject=m;
    }
    void showdata()
    {
        cout<<"For Engineering student:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Major subject:"<<major_subject<<endl;
    }
    ~engineering()
    {
        cout<<"Destructor of engineering"<<endl;
    }
};
class medicine:public student
{
public:
    medicine(string n="name",string m="Medicine")
     {
        name=n;
        major_subject=m;
    }
    void showdata()
    {
        cout<<"For Medicine student:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Major subject:"<<major_subject<<endl;
    }
    ~medicine()
    {
        cout<<"Destructor of medicine"<<endl;
    }
};
class science:public student
{
public:
    science(string n="name",string m="Science")
     {
        name=n;
        major_subject=m;
    }
    void showdata()
    {
        cout<<"For Science student:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Major subject:"<<major_subject<<endl;
    }
    ~science()
    {
        cout<<"Destructor of science"<<endl;
    }
};

int main()
{
    student *st[3];
    string s1,s2;
    cout<<"Enter your name:";
    cin>>s1;
    cout<<"Enter your major subject:";
    cin>>s2;

    engineering e1(s1,s2);
    medicine m1("Anya","Cardio");
    science sc1("ram");

    st[0]=&e1;
    st[1]=&m1;
    st[2]=&sc1;

    /*[0]=new engineering(s1,s2);
    st[1]=new medicine("Anya","Cardio");
    st[2]=new science("Ram");*/

    for(int i=0;i<3;i++)
    {
        cout<<endl;
        st[i]->showdata();
    }

    return 0;
    /*delete(st[]);
    delete(st[]);
    delete(st[]);*/
}
