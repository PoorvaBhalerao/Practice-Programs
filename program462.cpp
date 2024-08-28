//Doubly Linear Linked List using cpp with correct access specifier
//InsertFirst, InsertLast, Display, Count, DeleteFirst, DeleteLast
//Insert At Position, Delete At Position.
//Generic Linked Lst node to nodeDL

#include<iostream>
using namespace std;

template <class T>
struct nodeDL
{
    T data;
    struct nodeDL *next;
    struct nodeDL *prev;
};

template <class T>
class DoublyLL
{
    public:
        struct nodeDL<T> * First;
        int iCount;

    public:
        
        DoublyLL();

        void Display();
        int Count();
        
        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
DoublyLL<T>::DoublyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL<T>::Display()
{
    struct nodeDL<T> * temp = NULL;
    temp = First;
    cout<<"NULL <=> ";
    while(temp != NULL)
    {
        cout<<" "<<temp->data<<" <=>";
        temp = temp->next;
    }
    cout<<" NULL"<<endl;
}

template <class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLL<T>::InsertFirst(T No)
{
    struct nodeDL<T> * newn = NULL;

    newn = new struct nodeDL<T>;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertLast(T No)
{
    struct nodeDL<T> * newn = NULL;
    struct nodeDL<T> * temp = NULL;

    newn = new struct nodeDL<T>;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

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
        newn->prev = temp;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeDL<T> * temp = NULL;
    int iLength = 0;
    int i = 0;

    iLength = iCount;

    if(iPos < 1 || iPos > iLength+1)
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(No);
    }
    else
    {
        struct nodeDL<T> * newn = NULL;
        newn = new struct nodeDL<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;
        for(i= 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;
        iCount++;
    }
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    struct nodeDL<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to delete as LL is Empty"<<endl;
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else 
    {
        temp = First;
        First = First->next;
        temp->next->prev = NULL;
        delete temp;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    struct nodeDL<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to delete as LL is Empty"<<endl;
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else 
    {
        temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    struct nodeDL<T> * temp = NULL;
    int iLength = 0;
    int i = 0;

    iLength = iCount;

    if(iPos < 1 || iPos > iLength)
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iLength)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        iCount--;
    }
}

int main()
{
    DoublyLL<int> *iDLobj = new DoublyLL<int>();
    int iRet = 0;

    iDLobj->InsertFirst(51);
    iDLobj->InsertFirst(21);
    iDLobj->InsertFirst(11);

    iDLobj->Display();
    iRet = iDLobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iDLobj->InsertLast(101);
    iDLobj->InsertLast(111);
    iDLobj->InsertLast(121);

    iDLobj->Display();
    iRet = iDLobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iDLobj->DeleteFirst();

    iDLobj->Display();
    iRet = iDLobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iDLobj->DeleteLast();

    iDLobj->Display();
    iRet = iDLobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    iDLobj->InsertAtPos(121,3);

    iDLobj->Display();
    iRet = iDLobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    iDLobj->DeleteAtPos(3);

    iDLobj->Display();
    iRet = iDLobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    return 0;

}
