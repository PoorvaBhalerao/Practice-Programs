//Stack
//Constructor, Count, Display, PUSH

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Stack
{
    private:
        PNODE First;
        int iCount;

    public:
         
        Stack();
        void Display();
        int Count();
        void Push(int No);  // Just like InsertFirst() from SLL
        int Pop();          // Just like DeleteFirst() from SLL
};

Stack::Stack()
{
    First = NULL;
    iCount = 0;
}

void Stack::Display()
{
    cout<<"Elements of stack are: "<<endl;
    PNODE temp = NULL;
    temp = First;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

int Stack::Count()
{
    return iCount;
}

void Stack::Push(int No)
{
    PNODE newn = NULL;
    
    newn = new NODE;
    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next =  First;
        First = newn;
    }
    iCount++;
}

int Stack::Pop()
{
    return 0;
}

int main()
{
    Stack obj;
    int iRet = 0;

    obj.Push(10);
    obj.Push(20);
    obj.Push(30);
    obj.Push(40);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in stack are: "<<iRet<<endl;


    return 0;
}

