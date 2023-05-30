//program to define two namespaces square and cube
#include<iostream>
using namespace std;

namespace square
{
    int num;
    int fun(int n)
    {
        return (n*n);
    }
}

namespace cube
{
    int num;
    int fun(int n)
    {
        return (n*n*n);
    }
}

int main()
{
    int num1,num2;
    cout<<"Enter the number you want to find cube of:"<<endl;
    cin>>num1;
    square ::num=num1;
    cout<<"Enter the number you want to find square of:"<<endl;
    cin>>num2;
    cube ::num=num2;
    cout<<"The cube of the square num i.e "<<square::num<<" is "<<cube::fun(square::num)<<endl;
    cout<<"The square of the cube num i.e "<<cube::num<<" is "<<square::fun(cube::num)<<endl;
    return 0;
}
