//Program to find the fibonnacci number at nth term

#include<iostream>
#include<cmath>

using namespace std;

class Number
{
public:
    long int fibonacci(int n)
    {
        if(n==2 || n==1)
        {
            return (n-1);
        }
        else
        {
            return(fibonacci(n-1)+fibonacci(n-2));
        }

    }
};

int main()
{
    int num;
    Number obj;
    cout<<endl<<"Enter the position at which fibonnaci number you want to calculate:";
    cin>>num;
    long int answer=obj.fibonacci(num);
    cout<<endl<<"The fibonnaci number at the position "<<num<<" is:"<<answer;
    return 0;
}
