//code for push and pop operation in stack
#include<iostream>

using namespace std;

const int MaxSize=5;

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

int main()
{
    stack<int> obj1;
    int num,limit=0;
    char check='y';
    try{
        cout<<"Pushing element to stack"<<endl;
        //for(int i=0;i<MaxSize;i++)
        while(check!='n'&&check!='N')
        {
            //obj1.push(6);
            //obj1.push(6);
            //obj1.push(6);
            //obj1.push(6);
            //obj1.push(6);
            //obj1.push(5);
             cout<<"Enter the item you want to push to stack:";
             cin>>num;
             obj1.push(num);
             limit++;
             cout<<"Enter 'n' or 'N' to exit any other character to push the item:";
             cin>>check;
        }
        check='y';
        cout<<endl<<"Popping the elements of stack"<<endl;
        //while(limit>-1)
      // {
            //cout<<obj1.pop()<<endl;
            //limit=limit-1;
        //}
        while(check!='n'&& check!='N')
        {
            cout<<obj1.pop()<<endl;
            //limit=limit-1;
            cout<<"Enter 'n' or 'N' to exit any other character to pop the item:";
             cin>>check;
        }
    }
    catch(const char* error)
    {
        cout<<error<<endl;
    }
    return 0;
}
