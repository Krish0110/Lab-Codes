//program to create complex class and create derive class to add and subtract complex number

#include<iostream>
using namespace std;

class base_complex
{
//protected:

public:
     float real,imag;
    void setdata()
    {
        cout<<"Enter the complex number:"<<endl;
        cout<<"Real:"<<endl;
        cin>>real;
        cout<<"Imaginary:"<<endl;
        cin>>imag;
    }

    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

};

class subtract_complex;

class add_complex : public base_complex
{
public:
    friend class subtract_complex;
    add_complex addition(base_complex c)
    {
        add_complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};

class subtract_complex
{
private:
    float real1,imag1;
public:
    void setdata()
    {
         cout<<"Enter the complex number:"<<endl;
        cout<<"Real:"<<endl;
        cin>>real1;
        cout<<"Imaginary:"<<endl;
        cin>>imag1;
    }
    subtract_complex sub(base_complex c)
    {
        subtract_complex temp;
        temp.real1=real1-c.real;
        temp.imag1=imag1-c.imag;
        return temp;
    }
     void display()
    {
        cout<<real1<<" + "<<imag1<<"i"<<endl;
    }

};
int main()
{
    base_complex bc;
    add_complex ac,added;
    subtract_complex sc,subtracted;
    bc.setdata();
    ac.setdata();
    sc.setdata();
    cout<<"The complex number before addition:"<<endl;
    cout<<"bc=";
    bc.display();
    cout<<endl<<"ac=";
    ac.display();
    cout<<endl<<"The complex number formed after addition:"<<endl<<"bc + ac =";
    added=ac.addition(bc);
    added.display();

    cout<<endl<<"The complex number before subtraction:"<<endl;
    cout<<"bc=";
    bc.display();
    cout<<endl<<"sc=";
    sc.display();
    cout<<endl<<"The complex number formed after subtraction:"<<endl<<"sc - bc =";
    subtracted=sc.sub(bc);
    subtracted.display();

    return 0;
}
