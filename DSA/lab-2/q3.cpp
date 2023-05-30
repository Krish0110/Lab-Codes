//operations in double ended queue(deque)

#include<iostream>
#include<cmath>

using namespace std;

const int Size=30;

class Overflow{};
class Underflow{};

template<class T>
class Deque
{
  private:
  int Rear,Front;
  T queue_array[Size]={};
  public:
  Deque()
  {
    Rear=Front=-1;
  }
  bool isEmpty()
  {
    return(Front==Rear);
  }
  bool isFullRear()
  {
    return(Rear>=Size-1);
  }
  bool isFullFront()
  {
    return(Front==0 && Rear ==-1);
  }
  void Insert_Rear(T item)
  {
    if(isFullRear())
       throw Overflow();
    else if(Front==-1 && Rear==-1)
    {
      Rear=0;
    }
    else
       Rear+=1;
    queue_array[Rear]=item;
  }

  void Insert_Front(T item)
  {
    if(isFullFront())
        throw Overflow();
    else if(Front<0)
        {Front=Size-1;
        Rear=Size;}
    else
       Front--;
    queue_array[Front]=item;
  }

  T Delete_Front()
  {
    if(isEmpty()|| Front==Size)
      throw Underflow();
    else if(Front==-1)
      Front=0;
    else if(Front>Rear)
    {
      if(queue_array[Rear]==NULL)
          return queue_array[Front++];
      else
         Front=0;
    }
    else 
      Front++;
    return queue_array[Front];
  }
   
  T Delete_Rear()
  {
    if(isEmpty()|| Rear==-1)
       throw Underflow();
    else if(Rear<Front)
       Rear=Size-1;
    else if(Front!=-1)
       Rear--;
    else if(Front==-1)
       return queue_array[Rear--];
    return queue_array[Rear];
  }

  void display()
  {
        if(Rear==-1)
           cout<<endl<<"no items in Queue";
        else
        {
          cout<<endl<<"The data in queue is:";
          for(int i=0;i<Size;i++)
          {
            if(queue_array[i]==NULL)
              continue;
            else
               cout<<endl<<queue_array[i];
          }

        }
  }
  };

  int main()
{
    int check=0;
    char data;
    Deque<char> q;
    try{
        cout<<endl<<"Welcome to the Deque"<<endl<<"1.Insert From Rear"<<endl<<"2.Insert From Front"<<endl<<"3.Delete from Rear"<<endl<<"4.Delete from Front"<<endl<<"5.Display items in queue"<<endl<<"6.exit"<<endl;
    do
    {
        cout<<endl<<"Enter 1 to insert from back,2 to insert from from,3 to delete from back,4 to delete from front,5 to display and 6 to exit:";
        cin>>check;
        if(check==1)
            {
                cout<<endl<<"Enter the item you want to add at back of queue:";
                cin>>data;
                q.Insert_Rear(data);
            }
        else if(check==2)
            {
                cout<<endl<<"Enter the item you want to add at front of queue:";
                cin>>data;
                q.Insert_Front(data);
            }
        else if(check==3)
            {
                cout<<endl<<"The item removed from back of queue is:"<<endl<<q.Delete_Rear();
            }
        else if(check==4)
            {
                cout<<endl<<"The item removed from front of queue is:"<<endl<<q.Delete_Front();
            }
        else if(check==5)
            {
                q.display();
            }
        else if(check==6)
            break;
        else
            {
                cout<<endl<<"Please enter valid operation!";
            }
    }while(check!=6);
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

