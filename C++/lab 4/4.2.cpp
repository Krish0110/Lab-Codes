//program to create class that has dynamically allocated array as its member
#include<iostream>
#include<cstring>

using namespace std;

class sentence
{
private:
    char* ptr_sen;
public:
    sentence()
    {
        ptr_sen = new char[1];
        ptr_sen[0]='\0';
    }
    sentence(char *str)
    {
        ptr_sen=new char[strlen(str)+1];
        strcpy(ptr_sen,str);
    }
    sentence join(sentence s1,sentence s2)
    {
        ptr_sen=new char[strlen(s1.ptr_sen)+strlen(s2.ptr_sen)];
        ptr_sen=concatinate(s1.ptr_sen,s2.ptr_sen);
        return ptr_sen;
    }
    char *concatinate(char *s1,char *s2)
    {
        strcat(s1,s2);
        return s1;
    }
    void showdata()
    {
        cout<<ptr_sen<<endl;
    }
    ~sentence()
    {
        delete[]ptr_sen;
    }
};

int main()
{
    char string1[]="Engineers are ";
    char string2[]="Creatures of logic";
    sentence str1(string1),str2(string2),str3;

    str3=str3.join(str1,str2);
    cout<<"The combined string is"<<endl;
    str3.showdata();
    return 0;

}


