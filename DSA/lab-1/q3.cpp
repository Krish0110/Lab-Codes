//code fro conversion from infix to prefix
#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

const int MaxSize=30;

template<class T>
class stack
{
private:
    T stack_array[MaxSize];
    int Top;
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
                stack_array[Top]=item;
            }
    }

    T pop()
    {
        if(Top<0)
            throw("\n Stack Underflow");
        else
           {
               return stack_array[Top--];
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
        return stack_array[Top];
    }
};

bool isOperator(char op)
{
    if(op=='+'||op=='-'||op=='*'||op=='/'||op=='^')
        return true;
    else
        return false;
}
int precedence(char op)
{
    if(op=='^')
        return 3;
    else if(op=='*'||op=='/')
        return 2;
    else if(op=='+'||op=='-')
        return 1;
    else
        return 0;
}

string ToReverse(string infix)
{
    string reverseString="";
    for(int i=infix.length()-1;i>=0;i--)
    {
        reverseString+=infix[i];
    }
    return reverseString;
}

string ToPrefix(string infix)
{
    string prefix="";
    stack<char> s;
    string reverseOfinfix=ToReverse(infix);
   /* for(int i=0;i<reverseOfinfix.length();i++) {yo garyo vaney tala ni change garna parxa }
    {
        if(reverseOfinfix[i]==')')
            reverseOfinfix[i]='(';
        else if(reverseOfinfix[i]=='(')
            reverseOfinfix[i]=')';
    }*/
    for(int i=0;i<reverseOfinfix.length();i++)
    {
        if((reverseOfinfix[i]>='a'&&reverseOfinfix[i]<='z')||(reverseOfinfix[i]>='A'&&reverseOfinfix[i]<='Z'))
            prefix=prefix+reverseOfinfix[i];
        else if(reverseOfinfix[i]==')')
            s.push(reverseOfinfix[i]);
        else if(reverseOfinfix[i]=='(')
        {
            while((s.GetTopItem()!=')')&& (!s.isEmpty()))
            {
                prefix=prefix+s.pop();
            }
            if(s.GetTopItem()==')')
                s.pop();
        }
        else if(isOperator(reverseOfinfix[i]))
        {
            if(s.isEmpty())
                s.push(reverseOfinfix[i]);
            else if(precedence(reverseOfinfix[i])>precedence(s.GetTopItem()))
                s.push(reverseOfinfix[i]);
            else
            {
                while((precedence(reverseOfinfix[i])<=precedence(s.GetTopItem())) && (!s.isEmpty()))
                      {
                             prefix=prefix+s.pop();
                             //s.push(infix[i]);  (infinite loop chalxa tyasaile output naako)
                      }
                      s.push(reverseOfinfix[i]);
            }
        }
    }
    while(!s.isEmpty())
        prefix=prefix+s.pop();
    return prefix;
}
int main()
{
    try{
    string userInfix;
    cout<<endl<<"Enter the infix expression:";
    cin>>userInfix;
    cout<<endl<<"The given infix expression is:"<<userInfix;
    string ObtainedPrefix=ToPrefix(userInfix);
    cout<<endl<<"The prefix expression of given infix expression is:"<<ToReverse(ObtainedPrefix);
    }
    catch(const char* error)
    {
        cout<<error<<endl;
    }
    return 0;
}
