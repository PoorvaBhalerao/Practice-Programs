//Queue
//Constructor, Count, Display, EnQueue, DeQueue
// void EnQueue(T No);  // Just like InsertLast() from SLL
// int DeQueue();          // Just like DeleteFirst() from SLL
//Generic Queue
//node to nodeQ

#include<iostream>
using namespace std;

template <class T>
struct nodeQ
{
    int data;
    struct nodeQ *next;
};

template <class T>
class Queue
{
    private:
        struct nodeQ<T> * First;
        int iCount;

    public:
         
        Queue();
        void Display();
        int Count();
        void EnQueue(T No);  
        T DeQueue();          
};

template <class T>
Queue<T>::Queue()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Queue<T>::Display()
{
    cout<<"Elements of Queue are: "<<endl;
    struct nodeQ<T> * temp = NULL;
    
    temp = First;
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}

template <class T>
int Queue<T>::Count()
{
    return iCount;
}

template <class T>
void Queue<T>::EnQueue(T No)
{
    struct nodeQ<T> * newn = NULL;
    struct nodeQ<T> * temp = NULL;
    
    newn = new struct nodeQ<T>;
    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

template <class T>
T Queue<T>::DeQueue()
{
    T iValue;
    struct nodeQ<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to remove the element as Queue is empty"<<endl;
        return -1;
    }
    else
    {
        temp = First;

        iValue = First->data;
        First = First->next;
        delete temp;

        iCount--;
    }
    return iValue;
}

int main()
{
    Queue<int> *iQobj = new Queue<int>();
    int iRet = 0;
    int iRet1 = 0;

    iQobj->EnQueue(10);
    iQobj->EnQueue(20);
    iQobj->EnQueue(30);
    iQobj->EnQueue(40);

    iQobj->Display();
    iRet = iQobj->Count();
    cout<<"Number of elements in Queue are: "<<iRet<<endl;

    iRet1 = iQobj->DeQueue();
    cout<<"Removed element is: "<<iRet1<<endl;

    iRet1 = iQobj->DeQueue();
    cout<<"Removed element is: "<<iRet1<<endl;

    iQobj->Display();
    iRet = iQobj->Count();
    cout<<"Number of elements in Queue are: "<<iRet<<endl;

    iQobj->EnQueue(50);

    iQobj->Display();
    iRet = iQobj->Count();
    cout<<"Number of elements in Queue are: "<<iRet<<endl; 

    return 0;
}

