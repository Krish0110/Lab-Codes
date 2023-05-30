#include <iostream>

using namespace std;

template <typename T>
struct Node{
    T data;
    int next;
};

template <typename T, int n>
struct Queue_List{
    Node<T> arr[n];
    int available;
    int front, rear;

    Queue_List(){
        for (int i=0; i<n; i++){
            arr[i].next = i+1;
        }
        arr[n-1].next = -1;
        available = 0;
        front = -1;
        rear = -1;
    }

    int getNode(T data){
        if (available == -1){
            std::cout<<"[ERROR] Queue full\n";
            return(-1);
        }
        int index = available;
        available = arr[available].next;
        arr[index].data = data;
        arr[index].next = -1;
        return(index);
    }

    void deleteNode(int index){
        arr[index].next = available;
        available = index;
    }

    void enqueue(T data){
        int index = getNode(data);
        if (index != -1){
            if (rear != -1)
                arr[rear].next = index;
            if (front == -1)
                front = index;
            rear = index;
        }
    }

    T dequeue(){
        if (front != -1){
            int index = front;
            T data = arr[front].data;
            front = arr[front].next;
            deleteNode(index);
            return(data);
        }
        else{
            cout<<"[ERROR] Queue empty\n";
            return(-1);
        }
    }

    void display(){
        int i = front;
        cout<<endl<<"elements in queue are:"<<endl;
        cout<<"FRONT -> ";
        while (i != -1){
            cout<<arr[i].data<<" -> ";
            i = arr[i].next;
        }
        cout<<"REAR\n";
    }

};

int main()
{
    Queue_List<int,5> obj;
    int element,check;
    try{
        cout<<endl<<"Implementation of Queue as list"<<endl;
        cout<<endl<<"Operations available are:"<<endl<<"1.Enqueue in queue"<<endl<<"2.Dequeue in queue"<<endl<<"3.Display elements in queue"<<endl<<"4.Exit"<<endl;
        do
        {
            cout<<endl<<"Enter your choice as per above menu and enter '4' to exit:";
            cin>>check;
            if(check==1)
            {
                cout<<endl<<"Enter the element you want to insert in the list:";
                cin>>element;
                obj.enqueue(element);
            }
        else if(check==2)
        {
            int answer=obj.dequeue();
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

