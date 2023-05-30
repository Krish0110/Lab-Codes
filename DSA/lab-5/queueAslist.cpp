//Implementation of queue as linked list

#include<iostream>

using namespace std;

template <class T>
struct Node
{
    T data;
    Node *next;
};

template<class T>
class Queue_AS_Linked_List
{
private:
    Node<T> *Front,*Rear;
public:
    Queue_AS_Linked_List()
    {
        Front=NULL;
        Rear=NULL;
    }

    bool isEmpty()
    {
        return(Front==NULL && Rear==NULL);
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

    void Enqueue_IN_Queue(T item)
    {
        Node<T>* newnode=CreateNewNode(item);
        if(isEmpty())
        {
            Front=newnode;
            Rear=newnode;
        }
        else
        {
            Rear->next=newnode;
            Rear=newnode;
        }
        cout<<endl<<"Item "<<item<<" was enqueued in the queue"<<endl;
    }

    T Dequeue_From_Queue()
    {
        T item;
        Node<T> *temp;
        if(isEmpty())
            throw("Queue is full");
        else
        {
            temp=Front;
            item=Front->data;
            Front=Front->next;
            delete temp;
        }
        cout<<endl<<"Item was removed from the queue"<<endl;
        return item;
    }

    void display()
    {
        if(isEmpty())
            throw("List is empty");
        else
        {
            Node<T> *ptr=Front;
            int i=1;
            cout<<endl<<"Elements in the queue are:";
            cout<<endl<<"Element "<<i<<":"<<ptr->data;
            while(ptr->next!=NULL)
            {
                i++;
                ptr=ptr->next;
                cout<<endl<<"Element "<<i<<":"<<ptr->data;
            }
        }
    }
};

int main()
{
    Queue_AS_Linked_List<int> obj;
    int element,check;
    try{
        cout<<endl<<"Implementation of Queue as linked list"<<endl;
        cout<<endl<<"Operations available are:"<<endl<<"1.Enqueue in queue"<<endl<<"2.Dequeue in queue"<<endl<<"3.Display elements in queue"<<endl<<"4.Exit"<<endl;
        do
        {
            cout<<endl<<"Enter your choice as per above menu and enter '4' to exit:";
            cin>>check;
            if(check==1)
            {
                cout<<endl<<"Enter the element you want to insert in the list:";
                cin>>element;
                obj.Enqueue_IN_Queue(element);
            }
        else if(check==2)
        {
            int answer=obj.Dequeue_From_Queue();
            cout<<endl<<"The item removed from the queue is:"<<answer;
        }
        else if(check==3)
        {
            obj.display();
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
