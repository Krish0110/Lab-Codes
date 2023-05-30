//program to create inline function to display the net payment to employee by company
#include<iostream>
using namespace std;

inline void displaysalary(float s)
{
    float netsalary;
    netsalary=s-(s*10/100);
    cout<<"The net payment to the employee by the company after deduction of tax is "<<netsalary<<endl;
}

int main()
{
    float salary;
    cout<<"Enter the salary of the employee:"<<endl;
    cin>>salary;
    cout<<"The salary before deduction of tax is "<<salary<<endl;
    displaysalary(salary);
    return 0;
}
