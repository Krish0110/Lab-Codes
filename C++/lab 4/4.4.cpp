//program to create constructors and copy object

#include<iostream>
using namespace std;

class vehicles
{
    int num_vehicle;
    int hour;
    float rate;
public:
    vehicles()
    {
        num_vehicle=0;
        hour=0;
        rate=0;
    }
    vehicles(int nv,int h,int r)
    {
        num_vehicle=nv;
        hour=h;
        rate=r;
    }

    vehicles(vehicles &v)
    {
       num_vehicle= v.num_vehicle;
        hour=v.hour;
        rate=v.rate;
    }
    float charge()
    {
        float ch;
        ch=num_vehicle*hour*rate;
        if(num_vehicle>10)
            ch=ch-0.1*ch;
        return ch;
    }

    void display(float c)
    {
        cout<<"The number of vehicles parked is "<<num_vehicle<<" and the parked hour is "<<hour<<" hr and the rate of parking is Rs "<<rate<<" per hour"<<endl;
        cout<<"The total charge of parking is Rs"<<c<<endl;
    }
};
 int main()
 {
     int n,hr;
     float rt=50,total_charge;

     cout<<"The rate of parking is Rs 50 per hour for each vehicles"<<endl;
     cout<<"You will get a discount of 10% if the number of vechiles exceeds 10"<<endl;

     cout<<"Enter the number of vehicles you want to park:"<<endl;
     cin>>n;
     cout<<"Enter the hour you want to park:"<<endl;
     cin>>hr;

     vehicles v1(n,hr,rt);
     vehicles v2(v1);
     cout<<"The values in actual object is :"<<endl;
     total_charge=v1.charge();
     v1.display(total_charge);

     cout<<"The values in copied object is: "<<endl;
     total_charge=v2.charge();
     v2.display(total_charge);

     return 0;
 }
