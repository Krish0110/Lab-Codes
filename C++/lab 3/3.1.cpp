//Program to convert temperature in celsius to fahrenheit and vice versa
#include<iostream>
using namespace std;

class celsius
{
private:
    float ctemp;
public:
    setdata(float c)
    {
        ctemp=c;
    }
    float toFahrenheit()
    {
        float f;
        f=(ctemp*180/100)+32;
        return(f);
    }
};

class fahrenheit
{
private:
    float ftemp;
public:
    setdata(float f)
    {
        ftemp=f;
    }
    float toCelsius()
    {
        float c;
        c=(ftemp-32)*100/180;
        return(c);
    }
};

int main()
{
    celsius c1;
    fahrenheit f1;
    float temp1,temp2;
    cout<<"Enter the temperature in celsius to convert it into fahrenheit:"<<endl;
    cin>>temp1;
    c1.setdata(temp1);
    cout<<"The temperature "<<temp1<<" celsius in fahrenheit is "<<c1.toFahrenheit()<<" fahrenheit"<<endl;
    cout<<"Enter the temperature in fahrenheit to convert it into celsius:"<<endl;
    cin>>temp2;
    f1.setdata(temp2);
    cout<<"The temperature "<<temp2<<" fahrenheit in celsius is "<<f1.toCelsius()<<" celsius"<<endl;
    return 0;
}
