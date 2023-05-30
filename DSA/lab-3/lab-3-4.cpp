//Program to solve tower of hanoi problem

#include<iostream>
#include<cmath>

using namespace std;
int check=0;

void TowerOfHanoi(int disk,char source,char destination,char auxillary)
{
    if(disk==1)
        cout<<endl<<"Move disk"<<disk<<" from "<<source<<" to "<<destination;
    else
    {
        TowerOfHanoi(disk-1,source,auxillary,destination);
         cout<<endl<<"Move disk "<<disk<<" from "<<source<<" to "<<destination;
        TowerOfHanoi(disk-1,auxillary,destination,source);
    }
    check=1;
}

int main()
{
    int diskNum;
    cout<<endl<<"Enter the number of disk in Tower of hanoi:";
    cin>>diskNum;
    TowerOfHanoi(diskNum,'A','C','B');

    if(check==1)
        cout<<endl<<"Tower of hanoi solved";

    return 0;
}
