//Program to keep the record of the car

#include<iostream>
using namespace std;

class carpark
{
private:
    int car_id;
    int charge_per_hour;
    float parked_time;
public:
    void takingdata()
    {
        cout<<"Enter the car id:"<<endl;
        cin>>car_id;
        cout<<"Enter the charge of parking per hour:"<<endl;
        cin>>charge_per_hour;
        cout<<"Enter the time for which car was parked:"<<endl;
        cin>>parked_time;
    }
    void showdata()
    {
        float total_charge;
        total_charge=charge_per_hour*parked_time;
        cout<<"The car was parked for "<<parked_time<<" hours"<<endl;
        cout<<"The charge per hour is Rs "<<charge_per_hour<<" per hour"<<endl;
        cout<<"The total charge for parking is Rs "<<total_charge<<endl;
    }
};

int main()
{
    carpark car1;
    car1.takingdata();
    car1.showdata();
    return 0;
}
