//Double link insertion and deletion

#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

template <class T>
struct Node
{
  T data;
  Node *prev,*next;
};

template <class T>
class DoubleLinkedList
{
  private:
  Node<T> *Head;
  public:
  DoubleLinkedList()
  {
    Head=NULL;
  }

  bool isEmpty()
  {
    return(Head==NULL);
  }

  Node<T> *createNewNode(T value)
  {
    Node<T> *newnode=new Node<T>;
    if(newnode==NULL)
    {
      throw("New Node cnnot be created");
    }
    else
    {
      newnode->prev=NULL;
      newnode->data=value;
      newnode->next=NULL;
    }
    return newnode;
  }

  void insertAtBeginning(T value)
  {
    Node<T> *NewNode=createNewNode(value);
    if(isEmpty())
    {
        Head=NewNode;
    }
    else
    {
         NewNode->next=Head;
         Head->prev=NewNode;
         Head=NewNode;
    }
    cout<<endl<<"Item "<<value<<" inserted at the beginning of list"<<endl;
  }

  void insertAtEnd(T value)
  {
    Node<T> *NewNode=createNewNode(value);
    Node<T> *ptr;
    ptr=Head;
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
    }
    ptr->next=NewNode;
    NewNode->prev=ptr;
    cout<<endl<<"Item "<<value<<" inserted at the end of the list"<<endl;
  }

  void insertAfterSpecificNode(T value,T element)
  {
    Node<T> *NewNode,*ptr,*preptr;
    NewNode=createNewNode(value);
    preptr=Head;
    ptr=Head->next;
    while(preptr->data!=element)
    {
      if(ptr->next==NULL)
         throw("No such element found in the list");
      else
      {
          preptr=ptr;
          ptr=ptr->next;
      }
    }
    preptr->next=NewNode;
    NewNode->prev=preptr;
    NewNode->next=ptr;
    ptr->prev=NewNode;
    cout<<endl<<"Item "<<value<<" inserted after element "<<element<<endl;
  }

  void insertBeforeSpecificNode(T value,T element)
  {
    Node<T> *NewNode,*ptr,*preptr;
    NewNode=createNewNode(value);
    preptr=Head;
    ptr=Head->next;
    while(ptr->data!=element)
    {
      if(ptr->next==NULL)
         throw("No such element found in the list");
      else
      {
         preptr=ptr;
         ptr=ptr->next;
      }
    }
    preptr->next=NewNode;
    NewNode->prev=preptr;
    NewNode->next=ptr;
    ptr->prev=NewNode;
    cout<<endl<<"Item "<<value<<" inserted before element "<<element<<endl;
  }

  void insertAtSpecificPos(T value,int position)
  {
    int count=1;
    Node<T> *NewNode,*ptr,*preptr;
    NewNode=createNewNode(value);
    preptr=Head;
    ptr=Head->next;
    while(count<position-1)
    {
      if(ptr->next==NULL)
         throw("No such position exist in the list");
      else
      {
       preptr=ptr;
      ptr=ptr->next;
      count++;
      }
    }
    preptr->next=NewNode;
    ptr->prev=NewNode;
    NewNode->next=ptr;
    NewNode->prev=preptr;
    cout<<endl<<"Element "<<value<<" inserted at position "<<position<<endl;
  }

  T DeleteFromBeginning()
  {
    Node<T> * temp;
    T item;
    if(isEmpty())
    {
       throw("List is empty");
    }
    else
    {
      item=Head->data;
      temp=Head;
      Head=Head->next;
      Head->prev=NULL;
      delete temp;
    }
    cout<<endl<<"The item is deleted from beiginning"<<endl;
    return item;
  }

  T DeleteFromEnd()
  {
    Node<T>* ptr,*preptr;
    T item;
    if(isEmpty())
       throw("List is empty");
    else
    {
      preptr=Head;
      ptr=Head->next;
      while(ptr->next!=NULL)
      {
        preptr=ptr;
        ptr=ptr->next;
      }
      item=ptr->data;
      preptr->next=NULL;
      delete ptr;
    }
    cout<<endl<<"The item is deleted from the end"<<endl;
    return item;
  }

  T DeleteAfterSpecificNode(T element)
  {
    Node<T> *ptr,*preptr;
    T item;
    if(isEmpty())
        throw("List is empty");
    else
    {
      preptr=Head;
      ptr=Head->next;
      while(preptr->data!=element)
      {
        if(ptr->next==NULL)
        {
          throw("Element doesnot exist");
        }
        else
        {
          preptr=ptr;
          ptr=ptr->next;
        }
      }
      item=ptr->data;
      preptr->next=ptr->next;
      Node<T> *postptr=ptr->next;
      postptr->prev=preptr;
      delete ptr;
    }
    cout<<endl<<"Item deleted after element "<<element<<endl;
    return item;
  }

  T DeleteBeforeSpecificNode(T element)
  {
    Node<T> *ptr,*preptr,*temp;
    T item;
    if(isEmpty())
        throw("List is empty");
    else
    {
      preptr=Head;
      ptr=Head->next;
      while(ptr->data!=element)
      {
        if(ptr->next==NULL)
        {
          throw("Element doesnot exist");
        }
        else
        {
          preptr=ptr;
          ptr=ptr->next;
        }
      }
      if(preptr==Head)
        {
           item=Head->data;
           temp=Head;
           Head=Head->next;
           Head->prev=NULL;
      delete temp;
        }
      else
      {
       item=preptr->data;
      ptr->prev=preptr->prev;
      Node<T> *temp=preptr->prev;
      temp->next=ptr;
      delete preptr;
      }
    }
    cout<<endl<<"Item deleted before element "<<element<<endl;
    return item;
  }

  T DeleteAtSpecificPosition(int position)
  {
    Node<T> *ptr,*preptr,*temp;
    T item;
    int count=1;
    if(isEmpty())
       throw("List is Empty");
    else{
      preptr=Head;
      ptr=Head->next;
      while(count<position-1)
      {
        if(ptr->next==NULL)
           throw("No such position exist");
        else
        {
          preptr=ptr;
          ptr=ptr->next;
          count++;
        }
      }
      if(count==1)
        {
           item=Head->data;
           temp=Head;
           Head=Head->next;
           Head->prev=NULL;
          delete temp;
        }
      else{
        item=ptr->data;
        preptr->next=ptr->next;
        Node<T> *postptr=ptr->next;
        postptr->prev=preptr;
        delete ptr;
      }

    cout<<endl<<"The item at position "<<position<<" was deleted"<<endl;
    return item;
  }
  }

  void display()
  {
    if(Head==NULL)
       throw("List is empty");
    else
    {
      Node<T> *temp=Head;
      int i=1;
      cout<<endl<<"The elements in the list are:";
      cout<<endl<<"Element "<<i<<" ="<<temp->data;
      while(temp->next!=NULL)
      {
        i++;
        temp=temp->next;
        cout<<endl<<"Element "<<i<<" ="<<temp->data;
      }
    }
  }
};

int main()
{
  char check='i';
  DoubleLinkedList<int> obj;
  int num;
  try{
   cout<<endl<<"Welcome to the double linked list"<<endl;
  cout<<endl<<"The operation available in the list are:";
  cout<<endl<<"0.Insert at the beginning [0]";
  cout<<endl<<"1.Insert at the end [1]";
  cout<<endl<<"2.Insert after the specific node [2]";
  cout<<endl<<"3.Insert before specific node [3]";
  cout<<endl<<"4.Insert at specific position [4]";
  cout<<endl<<"5.Delete from the beginning [5]";
  cout<<endl<<"6.Delte from the end [6]";
  cout<<endl<<"7.Delete after specific node [7]";
  cout<<endl<<"8.Delete at specific position [8]";
  cout<<endl<<"9.Delete before specific node [9]";
  cout<<endl<<"10.Display [d or D]";
  while(check!='e' && check!='E')
  {
     cout<<endl<<"Enter your choice as per above menu and 'e' or 'E' to end the program:";
     cin>>check;
     if(check=='0')
     {
        cout<<endl<<"Enter the number you want to insert at beginning of the list:";
        cin>>num;
        obj.insertAtBeginning(num);
     }
     else if(check=='1')
     {
        cout<<endl<<"Enter the number you want to insert at end of the list:";
        cin>>num;
        obj.insertAtEnd(num);
     }
     else if(check=='2')
     {
        int ele;
        cout<<endl<<"Enter the element after which you want to perform insertion:";
        cin>>ele;
        cout<<endl<<"Enter the number you want to insert after the element "<<ele<<" :";
        cin>>num;
        obj.insertAfterSpecificNode(num,ele);
     }
     else if(check=='3')
     {
        int ele;
        cout<<endl<<"Enter the element before which you want to perform insertion:";
        cin>>ele;
        cout<<endl<<"Enter the number you want to insert before the element "<<ele<<" :";
        cin>>num;
        obj.insertBeforeSpecificNode(num,ele);
     }
     else if(check=='4')
     {
        int ele;
        cout<<endl<<"Enter the position at which you want to perform insertion:";
        cin>>ele;
        cout<<endl<<"Enter the number you want to insert at the position "<<ele<<" :";
        cin>>num;
        obj.insertAtSpecificPos(num,ele);
     }
     else if(check=='5')
     {
         int answer=obj.DeleteFromBeginning();
      cout<<endl<<"The element deleted is:"<<answer;
     }
      else if(check=='6')
     {
      int answer=obj.DeleteFromEnd();
      cout<<endl<<"The element deleted is:"<<answer;
     }
     else if(check=='7')
     {
      int ele;
      cout<<endl<<"Enter the element after which you want to perform deletion:";
      cin>>ele;
      int answer=obj.DeleteAfterSpecificNode(ele);
      cout<<endl<<"The element deleted is:"<<answer;
     }
      else if(check=='8')
     {
      int ele;
      cout<<endl<<"Enter the position at which you want to perform deletion:";
      cin>>ele;
      int answer=obj.DeleteAtSpecificPosition(ele);
      cout<<endl<<"The element deleted is:"<<answer;
     }
     else if(check=='9')
     {
      int ele;
      cout<<endl<<"Enter the element before which you want to perform deletion:";
      cin>>ele;
      int answer=obj.DeleteBeforeSpecificNode(ele);
      cout<<endl<<"the element deleted is:"<<answer;
     }
     else if(check=='D'||check=='d')
       obj.display();
    else if(check=='e'||'E')
        break;
    else
       cout<<endl<<"Please choose valid option";
  }
  }
      catch(const char* error)
    {
        cout<<error<<endl;
    }
  return 0;
}

