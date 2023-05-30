//Program to convert distance from feet and inch to meter and centimeter and vice versa
//1 meter =3.281 feet
//1 feet =12 inch
#include<iostream>

using namespace std;

class feet_inch;
class meter_centimeter
{
private:
    float meter,centimeter;
public:
    meter_centimeter()
    {
        meter=0;
        centimeter=0;
    }

    meter_centimeter(float m,float cm)
    {
        meter=m;
        centimeter=cm;
    }

    float to_meter()
    {
        return(meter+centimeter/100);
    }

    void display()
    {
        cout<<"Distance:"<<meter<<" meter and "<<centimeter<<" centimeter"<<endl;
    }

    meter_centimeter(feet_inch);

};

class feet_inch
{
private:
    float feet,inch;
public:
    feet_inch()
    {
        feet=0;
        inch=0;
    }

    feet_inch(float f,float i)
    {
        feet=f;
        inch=i;
    }


    float to_feet()
    {
        return(feet+inch/12);
    }

    void display()
    {
        cout<<"Distance:"<<feet<<" feet and "<<inch<<" inch"<<endl;
    }

    feet_inch(meter_centimeter);

};

meter_centimeter::meter_centimeter(feet_inch fi)
{
    float meter1=fi.to_feet() / 3.281;
    meter=int(meter1);
    centimeter=(meter1-meter)*100;
}

feet_inch::feet_inch(meter_centimeter c_m)
{
    float feet1=c_m.to_meter() * 3.281;
    feet=int(feet1);
    inch=(feet1-feet)*12;
}

int main()
{
    float f1,i1,m1,cm1;
    cout<<"Enter the distance in feet and inch:"<<endl;
    cin>>f1>>i1;
    feet_inch initial_fi(f1,i1);
    meter_centimeter converted_cm;
    cout<<"Distance before conversion to meter and centimeter:"<<endl;
    initial_fi.display();
    converted_cm=initial_fi;
    cout<<"Distance after conversion :"<<endl;
    converted_cm.display();

    cout<<"Enter the distance in meter and centimeter:"<<endl;
    cin>>m1>>cm1;
    meter_centimeter initial_cm(m1,cm1);
    feet_inch converted_fi;
    cout<<"Distance before conversion to feet and inch:"<<endl;
    initial_cm.display();
    converted_fi=initial_cm;
    cout<<"Distance after conversion :"<<endl;
    converted_fi.display();

    return 0;
}


