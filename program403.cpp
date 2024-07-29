//Queue
//Constructor, Count, Display, EnQueue, DeQueue
//User Accepted elements

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
    int iChoice = 0, iNo = 0, iRet = 0;
    
    cout<<"------------------Implementation of Queue--------------------\n";
    cout<<"Plese select your choice: \n";
    cout<<"1: Insert new element in Queue\n";
    cout<<"2: Remove element from Queue\n";
    cout<<"3: Display elements from  Queue\n";
    cout<<"4: Count number of elements in Queue\n";
    cout<<"5: Exit\n";
    cin>>iChoice;

    switch(iChoice)
    {
        case 1:
            cout<<"Enter the element that you want to insert: \n";
            cin>>iNo;
            obj.EnQueue(iNo);
        break;

        case 2:
            iNo = obj.DeQueue();
            if(iNo != -1)
            {
                cout<<"Unable to remove ,as Queue is Empty\n";
            }
        break;

        case 3:
            obj.Display();
        break;

        case 4:
            iRet = obj.Count();
            cout<<"Number of elements in Queue are: "<<iRet<<endl;
        break;

        case 5:
            cout<<"Thank you for using our application\n";
        break;
    }

    return 0;
}

