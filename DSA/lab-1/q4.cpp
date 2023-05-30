//code to evaluate postfix expression
#include<iostream>
#include<cstring>
#include<cmath>

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
            throw("\n Stack Overflow");
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
            return (stack_array[Top--]);
    }

    bool isEmpty()
    {
        return (Top==-1);
    }
    bool isFull()
    {
        return(Top>=MaxSize-1);
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

float Evaluate(string expression)
{
    float operand1,operand2;
    float result;
    stack<float> s;
    for(int i=0;i<expression.length();i++)
    {
        if(expression[i]>='0' && expression[i]<='9')
        {
            s.push(expression[i]-'0');//zero minus garera int ma lageko
            //cout<<"hi";
        }
        else if(isOperator(expression[i]))
        {
            operand1=s.pop();
            operand2=s.pop();
            if(expression[i]=='+')
                {
                   result=operand2+operand1;
                   //cout<<"ans:"<<result;
                }
            else if(expression[i]=='-')
                result=operand2-operand1;
            else if(expression[i]=='*')
                result=operand2*operand1;
            else if(expression[i]=='/')
                result=operand2/operand1;
            else if(expression[i]=='^')
                 result=pow(operand2,operand1);
            else
            {
               cout<<"no such operator" ;
               break;
            }

            s.push(result);
        }
    }
    result=s.pop();
    return result;
}

int main()
{
    try{
    string userPostfix;
    char value;
    cout<<endl<<"Enter the postfix expression to evaluate:"<<endl;
    cin>>userPostfix;
    cout<<endl<<"The given postfix expression is:"<<userPostfix;
    for(int i=0;i<userPostfix.length();i++)
    {
        if((userPostfix[i]>='a'&&userPostfix[i]<='z')||(userPostfix[i]>='A'&&userPostfix[i]<='Z'))
        {
            cout<<endl<<"Enter the given value of "<<userPostfix[i]<<" in the expression:";
            cin>>value;
            userPostfix[i]=value;
        }
        else
            continue;
    }
    cout<<endl<<"The given expression with value is:"<<userPostfix;
    //float hi=Evaluate(userPostfix);
    cout<<endl<<"The evaluated value of the given expression is:"<<Evaluate(userPostfix);
    }
    catch(const char* error)
    {
        cout<<error;
    }
    return 0;
}
