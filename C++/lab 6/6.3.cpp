//Program to create a class called musician

#include<iostream>
using namespace std;

class musician
{
protected:
    string ins_string[5],ins_wind[5],ins_perc[5];
public:
    void String()
    {
        ins_string[0]="veena";
        ins_string[1]="guitar";
        ins_string[2]="sitar";
        ins_string[3]="sarod";
        ins_string[4]="mandolin";

        for(int i=0;i<5;i++)
                {
                    cout<<(i+1)<<"."<<ins_string[i]<<endl;
                }
                cout<<endl;
    }

    void wind()
    {
        ins_wind[0]="flute";
        ins_wind[1]="clarinet";
        ins_wind[2]="saxophone";
        ins_wind[3]="nadhaswaram";
        ins_wind[4]="piccolo";

        for(int i=0;i<5;i++)
                {
                    cout<<(i+1)<<"."<<ins_wind[i]<<endl;
                }
                cout<<endl;
    }

    void perc()
    {
        ins_perc[0]="tabla";
        ins_perc[1]="mridangam";
        ins_perc[2]="bangos";
        ins_perc[3]="drums";
        ins_perc[4]="tambour";

         for(int i=0;i<5;i++)
                {
                    cout<<(i+1)<<"."<<ins_perc[i]<<endl;
                }
                cout<<endl;
    }
};

class TypeIns : protected musician
{
public:
    void get()
    {
        cout<<"Type of instrument to be displayed:"<<endl;
        cout<<"a. String instruments"<<endl;
        cout<<"b. Wind instruments"<<endl;
        cout<<"c. Percussion instruments"<<endl;
    }

    void show(char choice)
    {
        switch (choice)
        {
        case 'a':
            {
                cout<<"The string instruments are:"<<endl;
                musician::String();

                break;
            }

        case 'b':
            {
                cout<<"The wind instruments are:"<<endl;
                musician::wind();

                break;
            }

        case 'c':
            {
                cout<<"The percussion instruments are:"<<endl;
                musician::perc();

                break;
            }

        default:
            {
                cout<<"Please enter valid character"<<endl;
                break;
            }
        }
    }
};

int main()
{
    char ch,check;
    TypeIns obj1;
    obj1.get();

    do
    {
        cout<<"ENTER a,b OR c TO CHOOSE THE INSTRUMENT TYPE TO BE DISPLAYED FROM ABOVE:"<<endl;
        cin>>ch;
        obj1.show(ch);
        cout<<"ENTER y/Y to continue and any other character to exit:"<<endl;
        cin>>check;
    }while(check=='y'||check=='Y');
    return 0;

}
