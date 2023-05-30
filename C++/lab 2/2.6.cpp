//program to display the current monthly salary using default arguments
#include<iostream>
using namespace std;

float newsalary(float salary,float increment=12)
{
    float ns;
    ns=salary+(salary*increment/100);
    return ns;
}
 int main()
 {
     float ceo=35000 ,io=25000 , sa=24000 ,programmer=18000;
     cout<<"The past and current salary of the employee is as follow:"<<endl;
     cout<<"Post of employee \t\t\t Salary of 2009 \t\t\t Salary of 2010"<<endl;
     cout<<"Chief executive officer \t\t\t "<<ceo<<" \t\t\t\t\t "<<newsalary(ceo,9)<<endl;
     cout<<"Information officer \t\t\t\t "<<io<<" \t\t\t\t\t "<<newsalary(io,10)<<endl;
     cout<<"System analyst \t\t\t\t\t "<<sa<<" \t\t\t\t\t "<<newsalary(sa)<<endl;
     cout<<"Programmer \t\t\t\t\t "<<programmer<<" \t\t\t\t\t "<<newsalary(programmer)<<endl;
     return 0;
 }

