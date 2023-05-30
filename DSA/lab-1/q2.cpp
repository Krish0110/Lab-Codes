//code for conversion from infix to postfix
#include<iostream>
#include<cstring>
//#include"q1.cpp"

using namespace std;

const int MaxSize=30;

template<class T>
class stack{
    private:
    int Top;
    T Stack_array[MaxSize];
    public:
    stack()
    {
        Top=-1;
    }
    void push(T item)
    {
        if(Top>=MaxSize-1)
             throw("\nStack Overflow");
        else
            {
                Top=Top+1;
                Stack_array[Top]=item;
            }
    }
    T pop()
    {
        if(Top<0)
            throw("\n Stack Underflow");
        else
           {
               return Stack_array[Top--];
           }
    }
    bool isEmpty()
    {
        return(Top==-1);
    }
    bool isFull()
    {
        return(Top>=(MaxSize-1));
    }
    int GetTop()
    {
        return Top;
    }
    T GetTopItem()
    {
        return Stack_array[Top];
    }

};

bool isOperator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
        return true;
    else
        return false;
}
int precedence(char c)
{
    if(c=='^')
        return 3;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='+'||c=='-')
        return 1;
    else
        return 0;
}

string toPostfix(string infix)
{
    string postfix="";
    stack<char> s;

    for(int i=0;i<infix.length();i++)
    {
        if((infix[i]>='a'&&infix[i]<='z')||(infix[i]>='A'&&infix[i]<='Z'))
            postfix=postfix+infix[i];
        else if(infix[i]=='(')
            s.push(infix[i]);
        else if(infix[i]==')')
        {
            while((s.GetTopItem()!='(')&& (!s.isEmpty()))
            {
                postfix=postfix+s.pop();
            }
            if(s.GetTopItem()=='(')
                s.pop();
        }
        else if(isOperator(infix[i]))
        {
            if(s.isEmpty())
                s.push(infix[i]);
            else if(precedence(infix[i])>precedence(s.GetTopItem()))
                s.push(infix[i]);
            else
            {
                while((precedence(infix[i])<=precedence(s.GetTopItem())) && (!s.isEmpty()))
                      {
                             postfix=postfix+s.pop();
                             //s.push(infix[i]);  (infinite loop chalxa tyasaile output naako)
                      }
                      s.push(infix[i]);
            }
        }
    }
    while(!s.isEmpty())
        postfix=postfix+s.pop();
    return postfix;
}

int main()
{
    try{
    string userInfix;
    cout<<endl<<"Enter the infix expression:";
    cin>>userInfix;
    cout<<endl<<"The given infix expression is: "<<userInfix;
    cout<<endl<<"The postfix expression of given infix expression is:"<<toPostfix(userInfix)<<endl;
    }
    catch(const char* error)
    {
        cout<<error<<endl;
    }
    return 0;
}
