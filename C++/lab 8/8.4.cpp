//Write a program that stores the information about students (name, student id, department, and address)
//in a structure and then transfers the information to a file in your directory.
//Finally, retrieve the information from your file and print it in the proper format on your output screen.
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

struct students
{
private:
    int studentID;
    string name,department,address;
public:
   void setdata()
   {
       cout<<"Name:";
       cin>>name;
       cout<<"Student id:";
       cin>>studentID;
       cout<<"Department:";
       cin>>department;
       cout<<"Address:";
       cin>>address;
   }
   void display()
   {
       cout<<studentID<<setw(20)<<name<<setw(20)<<address<<setw(20)<<department<<endl;
   }

};


void writeInFile()
{
    students *s;
    int size;
    cout<<"Enter the number of the student:";
    cin>>size;
    s=new students[size];
    fstream ofile;
    ofile.open("Student.dat",ios::binary|ios::app);
    if(ofile.fail())
    {
        cout<<"File cannot be opened in write mode"<<endl;
        exit(1);
    }
    for(int i=0;i<size;i++)
    {
        s[i].setdata();
        ofile.write(reinterpret_cast<char*>(&s[i]),sizeof(*s));
    }

    ofile.close();
    delete []s;
}
void readFromFile()
{
    students s;
    fstream ifile;
    ifile.open("Student.dat",ios::in|ios::binary);
    if(ifile.fail())
    {
        cout<<"File cannot be opened in read mode"<<endl;
        exit(1);
    }

    while(!ifile.eof())
    {
        ifile.read(reinterpret_cast<char*>(&s),sizeof(s));
        if(ifile)//if file garera check garena vaney tyo endof file kata pugxa pugxa
           s.display();
    }

    ifile.close();
/*//next way
    int size;
    student* s;

    cout <<endl<< "DATA FROM THE FILE: ";

    ifstream file;
    file.open(fileN, ios::binary|ios::ate);
    if (file.fail())
    {
        cout << "could't open the file.";
        exit(1);
    }

    size = file.tellg() / sizeof(student);
    file.seekg(0, ios::beg);

    s = new student[size];
    file.read(reinterpret_cast<char*>(s), size*sizeof(student));
    for (int i = 0; i < size; i++)
    {
        s[i].showData();
    }
    file.close();

    delete[]s;*/
}

int main()

{
    cout<<"Enter the data of student:"<<endl;
    writeInFile();
    cout<<"Data from file:"<<endl;
    cout<<"Student ID"<<setw(20)<<"Name of student"<<setw(15)<<"Address"<<setw(20)<<"Department"<<endl;
    readFromFile();
    return 0;
}
