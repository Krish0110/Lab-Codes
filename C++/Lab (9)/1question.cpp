/*
Create a function called sum ( ) that returns the sum of the elements of an array. Make this function into a template so it will work with any numerical type. Write a main ( ) program that applies this function to data of various type.
*/
#include <iostream>
using namespace std;
template <typename T>
T sum(T arr[],int x){
        T sum=0;
    for (int i=0;i<x;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr_int[5]={2,4,6,8,10};
    float arr_float[4]={2.2,4.4,6.6,8.8};
    cout<<sum(arr_int,5)<<endl;
    cout<<sum(arr_float,4)<<endl;
    return 0;
}
