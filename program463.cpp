//Stack
//Constructor, Count, Display, Push, Pop
// void Push(int No);  // Just like InsertFirst() from SLL
// int Pop();          // Just like DeleteFirst() from SLL
//Generic stack ,node to nodeSCK

#include<iostream>
using namespace std;

template <class T>
struct nodeSCK
{
    T data;
    struct nodeSCK *next;
};


template <class T>
class Stack
{
    private:
        struct nodeSCK<T> * First;
        int iCount;

    public:
         
        Stack();
        void Display();
        int Count();
        void Push(T No);  
        T Pop();          
};

template <class T>
Stack<T>::Stack()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Stack<T>::Display()
{
    cout<<"Elements of stack are: "<<endl;
    struct nodeSCK<T> * temp = NULL;
    temp = First;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

template <class T>
int Stack<T>::Count()
{
    return iCount;
}

template <class T>
void Stack<T>::Push(T No)
{
    struct nodeSCK<T> * newn = NULL;
    
    newn = new struct nodeSCK<T>;
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

template <class T>
T Stack<T>::Pop()
{
    T iValue = 0;
    struct nodeSCK<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty"<<endl;
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
    Stack<int> *iSCKobj = new Stack<int>();
    int iRet = 0;
    int iRet1 = 0;

    iSCKobj->Push(10);
    iSCKobj->Push(20);
    iSCKobj->Push(30);
    iSCKobj->Push(40);

    iSCKobj->Display();
    iRet = iSCKobj->Count();
    cout<<"Number of elements in stack are: "<<iRet<<endl;

    iRet1 = iSCKobj->Pop();
    cout<<"Poped element is: "<<iRet1<<endl;

    iRet1 = iSCKobj->Pop();
    cout<<"Poped element is: "<<iRet1<<endl;

    iSCKobj->Display();
    iRet = iSCKobj->Count();
    cout<<"Number of elements in stack are: "<<iRet<<endl;

    iSCKobj->Push(50);

    iSCKobj->Display();
    iRet = iSCKobj->Count();
    cout<<"Number of elements in stack are: "<<iRet<<endl; 

    return 0;
}

