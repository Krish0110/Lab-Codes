//code to check paired paranthesis in mathematical expression
#include<iostream>
#include<cstring>

using namespace std;

const int MaxSize=100;

template <class T>
class stack
{
private:
    int Top;
    T stack_array[MaxSize];
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
            Top+=1;
            stack_array[Top]=item;
        }
    }

    T pop()
    {
        if(Top<0)
            throw("\n Stack Underflow");
        else
            return stack_array[Top--];
    }
    bool isEmpty()
    {
        return (Top==-1);
    }
    bool isFull()
    {
        return (Top>=MaxSize-1);
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

string CheckBrackets(string expression)
{
    stack<char> s;
    for(int i=0;i<expression.length();i++)
    {
        if(expression[i]=='('||expression[i]=='['||expression[i]=='{')
            s.push(expression[i]);
        else if(expression[i]==')'||expression[i]==']'||expression[i]=='}')
        {
            if(s.isEmpty())
            {
                return ("The closing bracket has no matching opening bracket.");
            }
            else
                s.pop();
        }
        else
            continue;
    }
    if(s.isEmpty())
        return ("The given expression is balanced.");
    else
        return ("The given expression is not balanced");
}

int main()
{
    try{
    string userExp;
    cout<<endl<<"Enter the expression to check whether the paranthesis is balanced or not:";
    cin>>userExp;
    cout<<endl<<"The given expression is:"<<userExp;
    string result=CheckBrackets(userExp);
    cout<<endl<<result;
    }
    catch(const char* error)
    {
        cout<<endl<<error;
    }
    return 0;
}
