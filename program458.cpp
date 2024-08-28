// Generic Doubly Circular Linked List


#include<iostream>
using namespace std;

template <class T>
struct nodeDC 
{
    T data;
    struct nodeDC *next;
    struct nodeDC *prev;
};

template <class T>
class DoublyCL
{
    private:
        struct nodeDC<T> * First;
        struct nodeDC<T> * Last;
        int iCount;

    public:

        DoublyCL();         //Constructor

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
DoublyCL<T>::DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL<T>::Display()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked List is Empty"<<endl;
        return;
    }

    cout<<" <=> ";
    do 
    {
        cout<<"| "<<First->data<<" | <=> ";
        First = First->next;
    }while(Last->next != First);
    cout<<endl;
}

template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>::InsertFirst(T No)
{
    struct nodeDC<T> * newn = NULL;

    newn = new struct nodeDC<T>; // OR newn = new node;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        // Last->next = First;
        // First->prev = Last;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
        // First->prev = Last;
        // Last->next = First;
    }
    Last->next = First;
    First->prev = Last;
    iCount++;
}

template <class T>
void DoublyCL<T>::InsertLast(T No)
{
    struct nodeDC<T> * newn = NULL;

    newn = new struct nodeDC<T>;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        // Last->next = First;
        // First->prev = Last;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = newn;
        // Last->next = First;
        // First->prev = Last;
    }
    Last->next = First;
    First->prev = Last;
    iCount++;
}

template <class T>
void DoublyCL<T>::InsertAtPos(T No, int iPos)
{
    int i = 0;
    int iLength = 0;
    iLength = iCount;

    if(iPos < 1 || iPos > iLength+1)
    {
        cout<<"Invalid Position\n";
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
        struct nodeDC<T> * newn = NULL;

        newn = new struct nodeDC<T>;
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        struct nodeDC<T> * temp = NULL;
        temp = First;
        for(i = 1; i<iPos-1; i++)
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
void DoublyCL<T>::DeleteFirst()
{
    if((First == NULL) && (Last == NULL))   // Empty LL
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if(First == Last)      //Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else        //More than one node
    {
        First = First->next;
        delete Last->next;
        First->prev = Last;
        Last->next = First;   
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if((First == NULL) && (Last == NULL))   // Empty LL
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if(First == Last)      //Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else        //More than one node
    {
        Last = Last->prev;
        delete First->prev;
        Last->next = First;
        First->prev = Last;

    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    int iLength = 0;
    iLength = iCount;

    if(iPos < 1 || iPos > iLength)
    {
        cout<<"Invalid Position\n";
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
        struct nodeDC<T> * temp = NULL;
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
    int iRet = 0;
    //DoublyCL obj;
    DoublyCL<int> *iobj = new DoublyCL<int>();

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(151);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobj->DeleteFirst();

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobj->DeleteLast();

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobj->InsertAtPos(200,3);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobj->DeleteAtPos(3);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    return 0;
}