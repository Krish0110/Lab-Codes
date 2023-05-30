//Write a program to create a user-defined manipulator that will format the output by setting the width,
// precision, and fill character at the same time by passing arguments.
#include<iostream>
#include<iomanip>

using namespace std;

class Manipulation
{
    int width,precision;
    char fill;
public:
    Manipulation(int w=0,int p=0,char f='\0')
    {
        width=w;
        precision=p;
        fill=f;
    }
    friend ostream& operator<<(ostream& ,Manipulation );
};
ostream& operator<<(ostream &os,Manipulation m)
{
    os<<setw(m.width)<<setfill(m.fill)<<setprecision(m.precision)<<flush;
    return os;
}
Manipulation MP(int width,int precision,int fill)
{
    return Manipulation(width,precision,fill);
}

int main()
{
    float num;
    char f_char;
    cout<<"Enter the number:";
    cin>>num;
     int width_size,precision_size;
    cout<<"Enter the width ,character and precision you want to set:"<<endl;
    cout<<"Width:";
    cin>>width_size;
    cout<<"Character:";
    cin>>f_char;
    cout<<"Presicion:";
    cin>>precision_size;
    cout<<MP(width_size,precision_size,f_char)<<num;
    return 0;
}
