//Write a program for transaction processing that write and read object randomly to and
//from a random access file so that user can add, update, delete and display the account
//information (account-number, last-name, first-name, total-balance).
#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
using namespace std;

class Transaction
{
private:
    long int account_number;
    char first_name[20];
    char last_name[20];
    float total_balance;
public:
    void setdata()
    {
        cout<<"First name:";
        cin>>first_name;
        cout<<"Last name:";
        cin>>ws;
        cin>>last_name;
        cout<<"Account number:";
        cin>>account_number;
        cout<<"Total Balance:";
        cin>>total_balance;
    }
    void display()
    {
        cout<<"Full name:"<<first_name<<" "<<last_name<<endl;
        cout<<"Account number:"<<account_number<<endl;
        cout<<"Total balance:"<<total_balance<<endl;
    }
};
void addToFile(string filename)
{
    Transaction tr;
    fstream addfile;
    addfile.open(filename,ios::binary|ios::app);
    if(!addfile)
    {
        cout<<"Cannot add data to the file!"<<endl;
        exit (1);
    }
    char check;
    do
    {
        tr.setdata();
        addfile.write(reinterpret_cast<char*>(&tr),sizeof(tr));
        cout<<"Enter (y or Y) if you want to add more data:";
        cin>>check;
    }while(check=='y'||check=='Y');
    addfile.close();
    cout<<"Data added successfully"<<endl;
}
void readFromFile(string filename)
{
    Transaction tr;
    int i=0;
    fstream readfile;
    readfile.open(filename,ios::in|ios::binary);
    if(!readfile)
    {
        cout<<"Cannot read data from the file!"<<endl;
        exit (1);
    }

    while(!readfile.eof())
    {
        readfile.read(reinterpret_cast<char*>(&tr),sizeof(tr));
        if(readfile)
        {
            cout<<"Record No:"<<(i+1)<<endl;
            tr.display();
            cout<<endl;
            i++;
        }

    }
    readfile.close();
}


void updateData(string filename)
{
    Transaction tr;
    int n;
    int i=0;
    char check;
    fstream updatefile,tempfile;
    updatefile.open(filename,ios::binary|ios::in|ios::out);
    if(!updatefile)
    {
        cout<<"Cannot update data in the file!"<<endl;
        exit (1);
    }
    readFromFile(filename);
    cout<<"Enter the record number you want to update:";
    cin>>n;
    tempfile.open("tempfile.dat",ios::binary|ios::out);
    while(!updatefile.eof())
    {
        updatefile.read(reinterpret_cast<char*>(&tr),sizeof(tr));
        if(i==(n-1))
        {
             if(updatefile)
             {
                 cout<<"Enter the modified data:"<<endl;
                 tr.setdata();
                 tempfile.write(reinterpret_cast<char*>(&tr),sizeof(tr));
                 continue;
             }
        }
        if(updatefile)
            tempfile.write(reinterpret_cast<char*>(&tr),sizeof(tr));
        i++;
    }
    tempfile.close();
    updatefile.close();
    tempfile.open("tempfile.dat",ios::binary|ios::in);
    updatefile.open(filename,ios::binary|ios::out);
    if(updatefile.fail())
    {
        cout<<"Cannot update data from the file!"<<endl;
        exit (1);
    }
    for(int j=0;j<i;j++)
    {
        tempfile.read(reinterpret_cast<char*>(&tr),sizeof(tr));
        updatefile.write(reinterpret_cast<char*>(&tr),sizeof(tr));
    }
    tempfile.close();
    remove("tempfile.dat");
    updatefile.close();
    cout<<"Data updated successfully"<<endl;
}

void deletefromfile(string filename)
{
    Transaction tr;
    int n;
    char check;
    int i=0;

    fstream updatefile;
    fstream tempfile;
    updatefile.open(filename,ios::binary|ios::in|ios::out);
    if(!updatefile)
    {
        cout<<"Cannot delete data from the file!"<<endl;
        exit (1);
    }
    readFromFile(filename);
    cout<<"Enter the record number you want to delete:";
    cin>>n;
    tempfile.open("tempfile.dat",ios::binary|ios::out);
    while(!updatefile.eof())
    {
        updatefile.read(reinterpret_cast<char*>(&tr),sizeof(tr));
        if(i==(n-1))
            continue;
        if(updatefile)
            tempfile.write(reinterpret_cast<char*>(&tr),sizeof(tr));
        i++;
    }
    tempfile.close();
    updatefile.close();
    tempfile.open("tempfile.dat",ios::binary|ios::in);
    updatefile.open(filename,ios::binary|ios::out);
    if(updatefile.fail())
    {
        cout<<"Cannot delete data from the file!"<<endl;
        exit (1);
    }
    for(int j=0;j<i;j++)
    {
        tempfile.read(reinterpret_cast<char*>(&tr),sizeof(tr));
        updatefile.write(reinterpret_cast<char*>(&tr),sizeof(tr));
    }
    tempfile.close();
    remove("tempfile.dat");
    updatefile.close();

    cout<<"Data deleted successfuly"<<endl;
}

int main()
{
    string fileN;
    cout<<"Enter the name of file:";
    cin>>fileN;
    int choice;
    char ch;
    do
    {
        cout<<"The operations which can be performed are: "<<endl;
        cout<<"1. Add account information."<<endl;
        cout<<"2. Update account information."<<endl;
        cout<<"3. Delete account information."<<endl;
        cout<<"4. Display account information."<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Choose the transaction you want to perform:"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            addToFile(fileN);
            break;

        case 2:
            updateData(fileN);
            break;

        case 3:
            deletefromfile(fileN);
            break;

        case 4:
            readFromFile(fileN);
            break;
        case 5:
            exit(1);
            break;
        default:
            cout<<"Please enter the choices availabe above:"<<endl;
            break;
        }
    cout<<"Enter p or P to return to menu"<<endl;
    cin>>ch;
    }while(ch=='p'||ch=='P');
    return 0;
}
