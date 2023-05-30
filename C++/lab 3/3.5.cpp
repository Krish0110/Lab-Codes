//Program that displays the information of the employee
#include<iostream>
using namespace std;

class employee
{
private:
    int employee_id;
    float total_bonous;
    float total_overtime;
    int year;
public:
    setpara(int ei,float tb,float to,int y)
    {
        employee_id=ei;
        total_bonous=tb;
        total_overtime=to;
        year=y;
    }
    void displayreport()
    {
        cout<<"An employee with employee id "<<employee_id<<" has received Rs "<<total_bonous<<" as a bonus"<<endl;
        cout<<" and "<<endl;
        cout<<"has worked "<<total_overtime<<" hours as overtime in the year "<<year<<endl;
    }
};
int main()
{
    employee e[50];
    int id,the_year;
    float bonus,time;
    int n;
    cout<<"Enter the number of employee:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the employee id:"<<endl;
        cin>>id;
        cout<<"Enter the year for which employee is getting bonus:"<<endl;
        cin>>the_year;
        cout<<"Enter the total bonus of the employee:"<<endl;
        cin>>bonus;
        cout<<"Enter the overtime that the employee has worked:"<<endl;
        cin>>time;
        e[i].setpara(id,bonus,time,the_year);
    }
    for(int i=0;i<n;i++)
        e[i].displayreport();
    return 0;
}
