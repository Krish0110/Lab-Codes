//Program using function overloading that converts feet to inches
#include<iostream>
using namespace std;

float convert()
{
    float f,i;
    cout<<"Enter the length in feet that you want to convert to inch : "<<endl;
    cin>>f;
    i=f*12;
    cout<<"The value of "<<f<<" feet is :"<<i<<"inches"<<endl;
    return 0;
}
float convert(float f)
{
    float i;
    i=f*12;
    return i;
}
float convert(float &f,float &i)//using pass by reference
{
    i=f*12;
}

int main()
{
    float feet,inch;
    cout<<"Using function without arguments"<<endl;
    convert();
    cout<<"Using function with one argument"<<endl;
    cout<<"Enter the length in feet that you want to convert to inch : "<<endl;
    cin>>feet;
    cout<<"The value of "<<feet<<" feet is :"<<convert(feet)<<"inches"<<endl;
    cout<<"Using function with two arguments"<<endl;
    cout<<"Enter the length in feet that you want to convert to inch : "<<endl;
    cin>>feet;
    cout<<"The value of "<<feet<<" feet is :"<<convert(feet,inch)<<"inches"<<endl;
    return 0;
}

