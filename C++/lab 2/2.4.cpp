//Program that passes two temperature by reference
#include<iostream>
using namespace std;

float &temperature(float &temp1,float &temp2)
{
    if(temp1>temp2)
        return temp1;
    else
        return temp2;
}

int main()
{
    float t1,t2,temp_by_user;
    cout<<"Enter the two values of temperature :"<<endl;
    cin>>t1;
    cin>>t2;
    cout<<"The value of two given temperature before comparision is "<<t1<<" and "<<t2<<endl;
    cout<<"Enter the value of temperature that will replace the larger temperature:"<<endl;
    cin>>temp_by_user;
    temperature(t1,t2)=temp_by_user;
    cout<<"The value of two given temperature after comparision (after replacement of larger one) is "<<t1<<" and "<<t2<<endl;
    return 0;
}
