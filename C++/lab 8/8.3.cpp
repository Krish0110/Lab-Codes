//Write a program to overload stream operators to read a complex number and display the complex number in a+ib format

#include<iostream>
using namespace std;

class Complex
{
private:
    float real,imaginary;
public:
    Complex(float r=0,float i=0):real(r),imaginary(i){}
    friend istream& operator>>(istream& is,Complex &cn);
    friend ostream& operator<<(ostream& os,Complex &cn);
};
istream& operator>>(istream& is,Complex &cn)
{
    is>>cn.real>>cn.imaginary;
    return is;
}
ostream& operator<<(ostream& os,Complex &cn)
{
    os<<cn.real<<"+"<<cn.imaginary<<"i"<<flush;
    return os;
}

int main()
{
    Complex c1;
    cout<<"Enter the complex number:";
    cin>>c1;
    cout<<"The entered complex number is:"<<endl;
    cout<<c1;
    return 0;
}
