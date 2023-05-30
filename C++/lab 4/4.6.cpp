//program to demonstrate static member function

#include<iostream>
using namespace std;

class creation
{
     static int serial_number;
public:
    creation()
    {
        serial_number++;
        cout<<"the object "<<serial_number<<" is created"<<endl;
    }
    ~creation()
    {
        cout<<"the object "<<serial_number<<" is destroyed"<<endl;
        serial_number--;
    }
    static void showdata()
    {
        cout<<"The total number of object created is "<<serial_number<<endl;
    }
};
int creation::serial_number=0;

int main()
{
    int n;

    cout<<"Enter the number of object you want to create:"<<endl;
    cin>>n;
    creation obj[n];
    obj[n].showdata();
    return 0;
}
