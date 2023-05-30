//Program to set the structure to hold the date (mm,dd and yy)
#include<iostream>
using namespace std;

struct date
{
    int month;
    int day;
    int year;
};
void print(date d1)
{
    cout<<"The date entered by user is "<<d1.month<<"/"<<d1.day<<"/"<<d1.year<<endl;
}
int main()
{
    struct date d;
    cout<<"Enter the month :"<<endl;
    cin>> d.month;
    cout<<"Enter the day :"<<endl;
    cin>> d.day;
    cout<<"Enter the year :"<<endl;
    cin>> d.year;
    print(d);
    return 0;
}
