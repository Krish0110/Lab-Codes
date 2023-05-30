//Write a program to demonstrate the use of different ios flags and functions to format the output.
//Create a program to generate the bill invoice of a department store by using different formatting
#include<iostream>
#include<iomanip>

using namespace std;

class billInvoice
{
private:
    int sNo[20];
    string itemName[20];
    float quantity[20];
    float priceForEach[20];
    float totalOfEachItem[20];
public:
    float wholeTotal=0;
    int i=0;
    billInvoice(){}
    void setdata()
    {
        char check;
        do
        {
            cout<<"Enter the name of item:";
            cin>>itemName[i];
            cout<<endl<<"Enter the quantity of item bought:";
            cin>>quantity[i];
            cout<<endl<<"Enter the price per each item:";
            cin>>priceForEach[i];
            totalOfEachItem[i]=quantity[i]*priceForEach[i];
            wholeTotal+=totalOfEachItem[i];
            sNo[i]=i+1;
            i++;


            cout<<endl<<"Enter 'y' if you want to add more item :";
            cin>>check;
        }while(check=='y'||check=='Y');
    }
    void display()
    {
        cout<<setw(50)<<"OUR DEPARTMENTAL STORE"<<endl<<setw(45)<<"Bhaktapur-10"<<endl;
        cout<<setw(5)<<left<<"S.N"<<setw(20)<<left<<"Name of Item"<<setw(20)<<left<<"Quantity"<<setw(20)<<left<<"Price of each"<<setw(20)<<left<<"Total";
        for(int j=0;j<i;j++)
        {
            cout<<endl;
            cout.width(5);
            cout<<left<<sNo[j];
            cout.width(20);
            cout<<left<<itemName[j];
            cout.width(20);
            cout<<left<<quantity[j];
            cout.width(20);
            cout<<left<<priceForEach[j];
            cout.width(20);
            cout<<left<<totalOfEachItem[j];
        }
        cout<<endl;
        cout<<"Total cost of all:";
        cout<<setw(50)<<right<<wholeTotal;
    }

};
int main()
{
    billInvoice b1;
    b1.setdata();
    b1.display();
    return 0;
}
