#include <iostream>

template <typename T>
struct Node{
    T data;
    int next;
};

template <typename T, int maxSize>
struct List{
    Node<T> arr[maxSize];
    int start;
    int available;

    List(){
        for (int i=0; i<maxSize; i++){
            arr[i].next = i+1;
        }
        arr[maxSize-1].next = -1;
        available = 0;
        start = -1;
    }

    int getNode(T data){
        if (available == -1){
            std::cout<<"[ERROR] List full\n";
            return(-1);
        }
        int a = available;
        available = arr[available].next;
        arr[a].data = data;
        arr[a].next = -1;
        return(a);
    }

    int deleteNode(int index){
        if (index == -1){
            std::cout<<"[ERROR] Cannot delete node\n";
            return(-1);
        }
        arr[index].next = available;
        available = index;
        return(0);
    }

    void insertBeginning(T data){
        int index = getNode(data);
        if (index != -1){
            arr[index].next = start;
            start = index;
        }
    }

    void insertEnd(T data){
        int index = getNode(data);
        if (start == -1){
            start = index;
        }
        else if(index != -1){
            int i = start;
            while (arr[i].next != -1){
                i = arr[i].next;
            }
            arr[i].next = index;
        }
    }


    void insertAfter(T pivot, T data){
        int index = getNode(data);
        if (start == -1){
            start = index;
        }
        else if(index != -1){
            int i = start;
            while(arr[i].next != -1 && arr[i].data != pivot){
                i = arr[i].next;
            }
            arr[index].next = arr[i].next;
            arr[i].next = index;
        }
    }

    void insertBefore(T pivot, T data){
        int index = getNode(data);
        if (start == -1){
            start = index;
        }
        else if(index != -1){
            int i = start;
            if (arr[start].data == pivot){
                arr[index].next = start;
                start = index;
                return;
            }
            while(arr[i].next != -1 && arr[arr[i].next].data != pivot){
                i = arr[i].next;
            }
            arr[index].next = arr[i].next;
            arr[i].next = index;
        }
    }

    void deleteBeginning(){
        if (start != -1){
            int index = start;
            start = arr[start].next;
            deleteNode(index);
        }
    }

    void deleteEnd(){
        if (start != -1){
            int prev = -1;
            int i = start;
            while (arr[i].next != -1){
                prev = i;
                i = arr[i].next;
            }
            // only one node
            if (prev == -1){
                start = arr[start].next;
            }
            else{
                arr[prev].next = -1;
            }
            deleteNode(i);
        }
    }

    void deleteAfter(T pivot){
        if (start != -1){
            int i = start;
            while (arr[i].next != -1){
                if (arr[i].data == pivot){
                    int j = arr[i].next;
                    arr[i].next = arr[j].next;
                    deleteNode(j);
                    break;
                }
                i = arr[i].next;
            }
        }
    }

    void deleteBefore(T pivot){
        if (start != -1){
            int i = start;
            int prev = -1;
            while (arr[i].next != -1){
                if (arr[arr[i].next].data == pivot){
                    if (prev != -1){
                        arr[prev].next = arr[i].next;
                        deleteNode(i);
                    }
                    break;
                }
                prev = i;
                i = arr[i].next;
            }
        }
    }

    void display(){
        int i = start;
        std::cout<<"START -> ";
        while (i != -1){
            std::cout<<arr[i].data<<" -> ";
            i = arr[i].next;
        }
        std::cout<<"END\n";
    }
};

int main()
{
    List<int,50> obj;
    std::cout<<"\n Insertion of item\n";
    obj.insertBeginning(2);
    obj.insertBeginning(3);
    obj.insertEnd(4);
    obj.insertAfter(3,6);
    obj.insertBefore(4,5);
    obj.display();

    std::cout<<"\n Deletion of item\n";
    obj.deleteAfter(2);
    obj.deleteBefore(2);
    obj.deleteBeginning();
    obj.deleteEnd();
    obj.display();
    return 0;
}
