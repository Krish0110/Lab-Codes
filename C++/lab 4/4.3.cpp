//program to create class that stores department name and id
#include<iostream>
#include<cstring>
using namespace std;

class Department
{
private:
    int DepartmentId;
    char *DepartmentName;

public:
    static int counting;
    Department()
    {
        DepartmentId=0;
        DepartmentName=new char[1];
        *DepartmentName='\0';
    }
    Department(int id,char *name)
    {
        DepartmentId=id;
        DepartmentName=new char[strlen(name)];
        strcpy(DepartmentName,name);
        counting++;
        cout<<"Object " <<counting<<" is created"<<endl;
    }
    void display()
    {
        cout<<"The name of department is "<<DepartmentName<<" and Department Id is "<<DepartmentId<<endl;
    }
    ~Department()
    {
        cout<<"Object "<<counting<<" goes out of scope"<<endl;
        counting--;
    }

};

int Department :: counting=0;

int main()
{
     Department d1(12,"MOMO FAST FOOD");
     Department d2(293,"BATA CLOTHING");
     Department d3(234,"DARI SALON");
     d1.display();
     d2.display();
     d2.display();
     return 0;
}
