//program to find the factorial of given number

#include<iostream>
#include<cmath>

using namespace std;
class Number
{
    public:
    long int factorial(int n)
    {
        if(n==0)
            return 1;
        else
            return(factorial(n-1)*n);
    }
};


int main()
{
    int num;
    Number obj;
    cout<<endl<<"Enter the number whose factorial you want to calculate:";
    cin>>num;
    long int answer=obj.factorial(num);
    cout<<endl<<"The factorial of the given number "<<num<<" is:"<<endl;
    cout<<num<<"! = "<<answer;
    return 0;
}
