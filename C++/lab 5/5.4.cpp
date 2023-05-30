//program to create class Date that overload prefix and postfix operator

#include<iostream>
#include<cmath>

using namespace std;

class Date
{
    int year,month,day;
public:
    int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    Date(){};
    Date(int y,int m,int d)
    {
        year=y;
        month =m;
        day=d;
    }
    void to_check_leap_year(int year)
    {
        if(year%4==0&&year%100!=0 || year%400==0)
            monthdays[1]=29;
    }

    Date operator ++()
    {
        to_check_leap_year(year);
        if(day<=monthdays[month-1])
        {
            ++day;
        if(day>monthdays[month-1])
        {
            int temp=month;
            month+=day/monthdays[temp-1];
            day=day%monthdays[temp-1];
        }
        if(month>12)
        {
            year+=month/12;
            month=month%12;
        }
        }
        else
           {
             cout<<"The given data is invalid"<<endl;
             exit(0);
           }

        return *this;
    }
    Date operator ++(int)
    {
        to_check_leap_year(year);

        Date* temp;

        if(day<=monthdays[month-1])
        {
            day++;
        if(day>monthdays[month-1])
        {
            int temp=month;
            month+=day/monthdays[temp-1];
            day=day%monthdays[temp-1];
        }
        if(month>12)
        {
            year+=month/12;
            month=month%12;
        }
        }
         else
           {
             cout<<"The given data is invalid"<<endl;
             exit(0);
           }
        temp->year=this->year;
        temp->month=this->month;
        temp->day=this->day;

        return *temp;
    }
    void display()
    {
        cout<<day<<" / "<<month<<" / "<<year<<endl;
    }
};

int main()
{
    Date d2(2021,3,29),postdate;
    int x,y,z;
    cout<<"Enter the day ,month and year of specific date:"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    Date d1(z,y,x);

    cout<<"The pre increment of date is:"<<endl;
    cout<<"The given date before pre increment is :"<<endl;
    d1.display();

    ++d1;
    cout<<"The date after pre increment is:"<<endl;
    d1.display();

    cout<<"The post increment of date is:"<<endl;
    cout<<"The given date before post increment is :"<<endl;
    d2.display();

    postdate=d2++;
    cout<<"The date after post increment is:"<<endl;
    postdate.display();
    return 0;
}
