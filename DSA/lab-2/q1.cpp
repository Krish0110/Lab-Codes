//Enqueue and dequeue operation in linear queue
#include<iostream>
#include<cstring>

using namespace std;

const int Size=30;

class Overflow{};
class Underflow{};

template<class T>
class LinearQueue
{
private:
    int Front,Rear;
    T queue_array[Size];
public:
    LinearQueue()
    {
        Front=Rear=-1;
    }
    bool isEmpty()
    {
        return ((Front==-1 && Rear==-1)|| Front>Rear );
    }
    bool isFull()
    {
         return (Rear==Size-1);
    }
    void Enqueue(T item)
    {
        if(isFull())
            throw Overflow();
        else if(Front==-1 && Rear==-1)
            Front=Rear=0;
        else
            Rear=Rear+1;
        queue_array[Rear]=item;
    }

    T Dequeue()
    {
        if(isEmpty())
             throw Underflow();
        else
        {
            return queue_array[Front++];
        }
    }
    void display()
    {
        if(Rear==-1)
           cout<<endl<<"no items in Queue";
        else
        {
                    cout<<endl<<"The data in queue is:";
        for(int i=Front;i<=Rear;i++)
            cout<<endl<<queue_array[i];
        }

    }

};

int main()
{
    int check=0;
    char data;
    LinearQueue<char> q;
    try{
         cout<<endl<<"Welcome to the Linear Queue"<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Display items in queue"<<endl<<"4.exit"<<endl;
    do
    {
        cout<<endl<<"Enter 1 to enqueue,2 to dequeue,3 to display and 4 to exit:";
        cin>>check;
        if(check==1)
            {
                cout<<endl<<"Enter the item you want to keep in queue:";
                cin>>data;
                q.Enqueue(data);
            }
        else if(check==2)
            {
                cout<<endl<<"The item removed from queue is:"<<endl<<q.Dequeue();
            }
        else if(check==3)
            {
                q.display();
            }
        else if(check==4)
            break;
        else
            {
                cout<<endl<<"Please enter valid operation!";
            }
    }while(check!=4);
    }
    catch(Overflow o)
    {
        cout<<endl<<"Queue overflow";
    }
    
    catch(Underflow u)
    {
        cout<<endl<<"Queue Underflow";
    }
    
    return 0;

}
