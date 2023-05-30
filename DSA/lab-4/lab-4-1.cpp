//single linked list insertion and deletion

#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

template <class T>
struct Node{
  T data;
  Node *next;
};

template <class T>
class LinkedList{
  private:
     Node<T> *head;
  public:
  LinkedList()
  {
    head=NULL;
  }
  bool ListIsEmpty()
  {
    return(head==NULL);
  }
  Node<T> *CreateNewNode(T value)
  {
    Node<T> *newnode=new Node<T>;
    if(newnode==NULL)
    {
        cout<<endl<<"New node cannot be created"<<endl;
        exit(1);
    }
    else
    {
        newnode->data=value;
        newnode->next=NULL;
    }
    return newnode;
  }
    void InsertAtBeginning(T item)
    {
      Node<T> *NewNode=CreateNewNode(item);
      if(ListIsEmpty())
         head=NewNode;
      else{
            NewNode->next=head;
            head=NewNode;
      }
      cout<<endl<<"Item "<<item<<" inserted at the beginning of list"<<endl;
    }

    void InsertAtEnd(T item)
    {
      Node<T> *ptr,*NewNode;
      NewNode=CreateNewNode(item);
      ptr=head;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;
      }
      ptr->next=NewNode;
      cout<<endl<<"Item "<<item<<" inserted at the end of list"<<endl;
    }

    void InsertAfterSpecificNode(T item,T element)
    {
      Node<T> *NewNode=CreateNewNode(item);
      Node<T> *ptr,*preptr;
      preptr=head;
      ptr=head->next;
      while(preptr->data!=element)
      {
        if(ptr->next==NULL)
        {
          cout<<endl<<"No such element found in the list"<<endl;
          exit(1);
        }
        else
        {
            preptr=ptr;
            ptr=ptr->next;
        }
      }
      preptr->next=NewNode;
      NewNode->next=ptr;
      cout<<endl<<"Item "<<item<<" added after "<<element<<endl;
    }

    void InsertbeforeSpecificNode(T item,T element)
    {
      Node<T> *NewNode=CreateNewNode(item);
      Node<T> *ptr,*preptr;
      preptr=head;
      ptr=head->next;
      while(ptr->data!=element)
      {
        if(ptr->next==NULL)
        {
          cout<<endl<<"No such element found in the list"<<endl;
          exit(1);
        }
        else
        {
            preptr=ptr;
            ptr=ptr->next;
        }
      }
      preptr->next=NewNode;
      NewNode->next=ptr;
      cout<<endl<<"Item "<<item<<" added before "<<element<<endl;
    }

  void InsertAtSpecificPos(T item,int position)
  {
    Node<T> *NewNode=CreateNewNode(item);
    Node<T> *ptr=head;
    int count=1;
    while(count<position-1)
    {
      ptr=ptr->next;
      count++;
    }
      NewNode->next=ptr->next;
      ptr->next=NewNode;
      cout<<endl<<"Element "<<item<<" inserted at position "<<position<<endl;
  }

  T DeleteFromBeginning()
  {
    Node<T> * temp;
    T item;
    if(ListIsEmpty())
    {
       cout<<endl<<"The list is empty"<<endl;
       exit(1);
    }
    else
    {
      item=head->data;
      temp=head;
      head=head->next;
      delete temp;
    }
    cout<<endl<<"The item is deleted from beiginning"<<endl;
    return item;
  }

  T DeleteFromEnd()
  {
    Node<T> *preptr,*ptr;
    T item;
    if(ListIsEmpty())
    {
      cout<<endl<<"The list is empty"<<endl;
      exit(1);
    }
    else
    {
      preptr=head;
      ptr=head->next;
      while(ptr->next!=NULL)
      {
        preptr=ptr;
        ptr=ptr->next;
      }
      item=ptr->data;
      preptr->next=NULL;
      delete ptr;
    }
    cout<<endl<<"The item is deleted from end"<<endl;
    return item;
  }

  T DeleteNodeAfterSpecificNode(T element)
  {
    T item;
    Node<T> *preptr,*ptr;
    if(ListIsEmpty())
    {
      cout<<endl<<"The list is empty"<<endl;
      exit(1);
    }
    else{
      preptr=head;
      ptr=head->next;
      while(preptr->data!=element)
      {
        preptr=ptr;
        ptr=ptr->next;
      }
      item=ptr->data;
      preptr->next=ptr->next;
      delete ptr;
    }
    cout<<endl<<"The item is deleted after element "<<element<<endl;
    return item;
  }

  T DeleteAtSpecificPos(int position)
  {
    int count=1;
    T item;
    Node<T> *ptr,*preptr;
    if(ListIsEmpty())
    {
      cout<<endl<<"The list is empty"<<endl;
      exit(1);
    }
    else{
      preptr=head;
      ptr=head->next;
      while(count<position-1)
      {
        preptr=ptr;
        ptr=ptr->next;
      }
      item=ptr->data;
      preptr->next=ptr->next;
      delete ptr;
    }
    cout<<endl<<"The item at position "<<position<<" was deleted"<<endl;
    return item;
  }

  void displayList()
  {
    if(head==NULL)
    {
      cout<<endl<<"The list is empty"<<endl;
      exit(1);
    }
    else
    {
      Node<T> *temp=head;
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
  LinkedList<int> obj;
  int num;
  cout<<endl<<"Welcome to the linked list"<<endl;
  cout<<endl<<"The operation available in the list are:";
  cout<<endl<<"0.Insert at the beginning";
  cout<<endl<<"1.Insert at the end";
  cout<<endl<<"2.Insert after the specific node";
  cout<<endl<<"3.Insert before specific node";
  cout<<endl<<"4.Insert at specific position";
  cout<<endl<<"5.Delete from the beginning";
  cout<<endl<<"6.Delte from the end";
  cout<<endl<<"7.Delete after specific node";
  cout<<endl<<"8.Delete at specific position";
  cout<<endl<<"9.Display";
  while(check!='e' && check!='E')
  {
     cout<<endl<<"Enter your choice as per above menu and 'e' or 'E' to end the program:";
     cin>>check;
     if(check=='0')
     {
        cout<<endl<<"Enter the number you want to insert at beginning of the list:";
        cin>>num;
        obj.InsertAtBeginning(num);
     }
     else if(check=='1')
     {
        cout<<endl<<"Enter the number you want to insert at end of the list:";
        cin>>num;
        obj.InsertAtEnd(num);
     }
     else if(check=='2')
     {
        int ele;
        cout<<endl<<"Enter the element after which you want to perform insertion:";
        cin>>ele;
        cout<<endl<<"Enter the number you want to insert after the element "<<ele<<" :";
        cin>>num;
        obj.InsertAfterSpecificNode(num,ele);
     }
     else if(check=='3')
     {
        int ele;
        cout<<endl<<"Enter the element before which you want to perform insertion:";
        cin>>ele;
        cout<<endl<<"Enter the number you want to insert before the element "<<ele<<" :";
        cin>>num;
        obj.InsertbeforeSpecificNode(num,ele);
     }
     else if(check=='4')
     {
        int ele;
        cout<<endl<<"Enter the position at which you want to perform insertion:";
        cin>>ele;
        cout<<endl<<"Enter the number you want to insert at the position "<<ele<<" :";
        cin>>num;
        obj.InsertAtSpecificPos(num,ele);
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
      int answer=obj.DeleteNodeAfterSpecificNode(ele);
      cout<<endl<<"The element deleted is:"<<answer;
     }
      else if(check=='8')
     {
      int ele;
      cout<<endl<<"Enter the position at which you want to perform deletion:";
      cin>>ele;
      int answer=obj.DeleteAtSpecificPos(ele);
      cout<<endl<<"The element deleted is:"<<answer;
     }
     else if(check=='9')
       obj.displayList();
    else if(check=='e'||'E')
        break;
    else
       cout<<endl<<"Please choose valid option";
  }
  return 0;
}
