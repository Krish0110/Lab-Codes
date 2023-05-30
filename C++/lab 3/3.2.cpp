//Program to check whether the number is prime or nott
#include<iostream>
using namespace std;

class numbers
{
private:
    int num;
public:
    setdata(int n)
    {
        num=n;
    }
    bool tocheck()
    {
        if(num<=1)
           {
            cout<<"The number is less than 1"<<endl;
            return false;
           }
        else
        {
           for(int i=2;i<num;i++)
           {
               if(num%i==0)
                {
                    return false;
                }
               else
                {
                    return true;
                }
           }
        }
    }
};

int main()
{
    numbers n1;
    bool check;
    int num1;
    char ch='y';
       while(ch=='y'||ch=='Y')
         {
            cout<<"Enter the number to check whether it is prime or not:"<<endl;
            cin>>num1;
            n1.setdata(num1);
            check=n1.tocheck();
            if(check==1)
                cout<<"The given number "<<num1<<" is a prime number"<<endl;
            else if(check==0)
                cout<<"The given number "<<num1<<" is not a prime number"<<endl;
            cout<<"Enter 'y' if you want to continue and 'n' if you want to end the program:"<<endl;
            cin>>ch;
           while(ch!='y'&& ch!='n' && ch!='Y' && ch!='N')
           {
               cout<<"Please enter 'y'or 'n' not other character:"<<endl;
               cin>>ch;
           }
         }
    return 0;
}
