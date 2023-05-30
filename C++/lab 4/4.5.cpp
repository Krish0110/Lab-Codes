//program that illustrates constant and non constant object and member function

#include<iostream>
using namespace std;

class checking
{
    int data;
public:
    checking()
    {
        data=0;
    }
    checking(int n=1)
    {
        data=n;
    }
    void constant_mem_fun() const
    {
        cout<<"Constant member function is called"<<endl;
         cout<<"The value in object is:"<<data<<endl;
    }
    void Non_cons_mem_fun()
    {
        data=5;
        cout<<"Non constant member function is called"<<endl;
        cout<<"The value in object is:"<<data<<endl;
    }
};
int main()
{
    checking non_cons_obj(3);
    const checking cons_obj(4);
     cout<<"for constant object:"<<endl;
    //Relation of const object and non constant member function
    //cons_obj.Non_cons_mem_fun();    //error is observed as constant object cannot call non constant member function

    //Relation of const object and constant member function
    cons_obj.constant_mem_fun();    //constant object can call constant member function

     cout<<"for non  constant object:"<<endl;
      //Relation of non const object and constant member function
      non_cons_obj.constant_mem_fun(); //non constant object can call constant member function

     //Relation of non const object and non constant member function
     non_cons_obj.Non_cons_mem_fun();   //non constant object can call non constant member function
     //the value of non constant object changes

     return 0;
}
