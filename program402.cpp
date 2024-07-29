//Queue
//Constructor, Count, Display, EnQueue, DeQueue

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
         
        Queue();
        void Display();
        int Count();
        void EnQueue(int No);  // Just like InsertLast() from SLL
        int DeQueue();          // Just like DeleteFirst() from SLL
};

Queue::Queue()
{
    First = NULL;
    iCount = 0;
}

void Queue::Display()
{
    cout<<"Elements of Queue are: "<<endl;
    PNODE temp = NULL;
    
    temp = First;
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}

int Queue::Count()
{
    return iCount;
}

void Queue::EnQueue(int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    
    newn = new NODE;
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

int Queue::DeQueue()
{
    int iValue = 0;
    PNODE temp = NULL;

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
    Queue obj;
    int iRet = 0;
    int iRet1 = 0;

    obj.EnQueue(10);
    obj.EnQueue(20);
    obj.EnQueue(30);
    obj.EnQueue(40);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in Queue are: "<<iRet<<endl;

    iRet1 = obj.DeQueue();
    cout<<"Removed element is: "<<iRet1<<endl;

    iRet1 = obj.DeQueue();
    cout<<"Removed element is: "<<iRet1<<endl;

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in Queue are: "<<iRet<<endl;

    obj.EnQueue(50);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in Queue are: "<<iRet<<endl; 

    return 0;
}

