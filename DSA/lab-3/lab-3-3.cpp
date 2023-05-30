//fibonaci and factorial using tail

#include<iostream>
#include<cmath>

using namespace std;

class Number
{
public:
    long int factorialTail(int n,long int result=1)
    {
        if(n==0)
            return result;
        else
           return  factorialTail(n-1,n*result);
    }

    long int fibonaciTail(int n,long int Term1=0,long int Term2=1)
    {
        if(n==1)
            return Term1;
        else if(n==2)
            return Term2;
        else
            return fibonaciTail(n-1,Term2,Term1+Term2);
    }
};
int main()
{
    int num1,num2;
    Number obj;
    int option=1;
    while(option!=3)
    {
        cout<<endl<<"Choose the operation you want to perform:";
        cout<<endl<<"1.Fibonacci"<<endl<<"2.Factorial"<<endl<<"3.Exit"<<endl;
        cin>>option;
        if(option==2)
        {
            cout<<endl<<"Enter the number whose factorial you want to calculate:";
            cin>>num1;
            long int answer1=obj.factorialTail(num1);
            cout<<endl<<"The factorial of the given number "<<num1<<" is:"<<endl;
            cout<<num1<<"! = "<<answer1;
        }
        else if(option==1)
        {
            cout<<endl<<"Enter the position at which fibonnaci number you want to calculate:";
            cin>>num2;
            long int answer2=obj.fibonaciTail(num2);
            cout<<endl<<"The fibonnaci number at the position "<<num2<<" is:"<<answer2;
        }
        else if(option==3)
            break;
        else
            cout<<endl<<"please enter valid option";
    }

    return 0;

}
