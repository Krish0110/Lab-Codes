//implementation of stack as linked list

#include<iostream>
#include<cstdlib>

using namespace std;

template <class T>
struct Node
{
    T data;
    Node *next;
};

template <class T>
class Stack_As_Linked_List
{
private:
    Node<T> * Head,*TOP;
public:
    Stack_As_Linked_List()
    {
        Head=NULL;
        TOP=NULL;
    }

    bool IsEmpty()
    {
        return(TOP==NULL);
    }

    Node<T> *CreateNewNode(T item)
    {
        Node<T> *NewNode=new Node<T>;
        if(NewNode==NULL)
            throw("New node cannot be created");
        else
        {
            NewNode->data=item;
            NewNode->next=NULL;
        }
         return NewNode;
    }

    void Push_In_stack(T item)
    {
        Node<T> *newnode=CreateNewNode(item);
        if(Head==NULL && TOP==NULL)
        {
            Head=newnode;
            TOP=Head;
        }
        else
        {
            newnode->next=TOP;
            TOP=newnode;
            Head=newnode;
        }
        cout<<endl<<"Item "<<item<<" was pushed in the stack"<<endl;
    }

    T Pop_From_stack()
    {
        T item;
        Node<T> *temp;
        if(IsEmpty())
            throw("List is empty");
        else{
            item=TOP->data;
            temp=TOP;
            TOP=TOP->next;
            Head=TOP;
            delete temp;
        }
        cout<<endl<<"Item was popped from the stack"<<endl;
        return item;
    }

    void DisplayStack()
    {
        if(IsEmpty())
            throw("List is emptty");
        else
        {
            Node<T> *ptr=TOP;
            int i=1;
            cout<<endl<<"Elements in the stack is:";
             cout<<endl<<"Element "<<i<<" ="<<ptr->data;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
                i++;
                cout<<endl<<"Element "<<i<<" ="<<ptr->data;
            }
        }
    }
};

int main()
{
    Stack_As_Linked_List<int> obj;
    int value,check;
    try{
    cout<<endl<<"Implementation of stack as list:"<<endl;
    cout<<endl<<"Operations available are:"<<endl<<"1.Push to stack"<<endl<<"2.Pop from stack"<<endl<<"3.Display"<<endl<<"4.Exit"<<endl;
    do
    {
        cout<<endl<<"Enter your choice as per above menu and '4' to exit:";
        cin>>check;
        if(check==1)
        {
            cout<<endl<<"Enter the element you want to push in the stack:";
            cin>>value;
            obj.Push_In_stack(value);
        }
        else if(check==2)
        {
            int answer=obj.Pop_From_stack();
            cout<<endl<<"The item popped from stack is:"<<answer;
        }
        else if(check==3)
        {
            obj.DisplayStack();
        }
        else if(check==4)
            break;
        else
            cout<<endl<<"Please enter valid operation";
    }while(check!=4);
    }

     catch(const char *error)
     {
         cout<<endl<<error;
     }
    return 0;
}
