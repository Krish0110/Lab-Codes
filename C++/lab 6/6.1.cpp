//Program to convert distance in meter and centimeter to meter and vice versa
#include<iostream>
using namespace std;

class Distance
{
private:
    float meter,centimeter;
public:
    Distance()
    {
        meter=0;
        centimeter=0;
    }

    Distance(float m,float cm)
    {
        meter=m;
        centimeter=cm;
    }

    //conversion from user defined to basic float(to meter)
    operator float()
    {
        return(meter+centimeter/100);
    }

    //conversion from float to user defined(to meter and centimeter)

    Distance(float value)
    {
        meter=int(value);
        centimeter=(value-int(value))*100;
    }
    void display()
    {
        cout<<"Distance:"<<meter<<" meters and "<<centimeter<<" centimeters"<<endl;
    }
};

int main()
{
    float n1,n2;
    cout<<"Enter the distance in meter and centimeter:"<<endl;
    cin>>n1;
    cin>>n2;
    Distance d1(n1,n2);
    cout<<"The given distance before conversion to meter is:"<<endl;
    d1.display();
    float Calculated_distance=d1;
    cout<<"The distance in meter only is :"<<Calculated_distance<<" meters"<<endl;

    float num;
    cout<<"Enter the distance in meter to convert to meter and centimeter:"<<endl;
    cin>>num;
    cout<<"The given distance before conversion :"<<num<<" meters"<<endl;
    Distance d2=num;
    cout<<"The distance after conversion to meter and centimeter is:"<<endl;
    d2.display();
    return 0;
}
