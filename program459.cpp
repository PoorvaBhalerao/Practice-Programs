#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
// Code of Singly Linear
//
////////////////////////////////////////////////////////////////////
template <class T>
struct nodeSL
{
    T data;
    struct nodeSL *next;
};

template <class T>
class SinglyLL
{
    private:
        struct nodeSL<T> * First;
        int iCount;

    public:
        SinglyLL();     
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
SinglyLL<T>::SinglyLL()    //constructor is defined with class name and scope resolution operator
{
    //cout<<"Inside Constructor"<<endl;
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    struct nodeSL<T> * temp = NULL;  
    temp = First;
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct nodeSL<T> * newn = NULL;

    newn = new struct nodeSL<T>;    //allocate dynamic memory

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)   //OR if(iCount == 0)
    {
        First = newn;
    }
    else 
    {
        newn->next = First;
        First = newn;
    }
    iCount++;               //iCount is For insert functions it is ++
                            // for delete functions it is --
}

template <class T>
void SinglyLL<T>::InsertLast(T No)
{
    struct nodeSL<T> * newn = NULL;
    struct nodeSL<T> * temp = NULL;

    newn = new struct nodeSL<T>;    //allocate dynamic memory

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)   //OR if(iCount == 0)
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
void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
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
        struct nodeSL<T> * newn = NULL;
        struct nodeSL<T> * temp = NULL;

        newn = new struct nodeSL<T>;
        newn->data = No;
        newn->next = NULL;

        temp = First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct nodeSL<T> * temp = NULL;
    if(First == NULL)
    {
        cout<<"Unable to delete as LinkedList is empty"<<endl;
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
        First = temp->next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct nodeSL<T> * temp = NULL;
    if(First == NULL)
    {
        cout<<"Unable to delete as LinkedList is empty"<<endl;
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
            temp= temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    struct nodeSL<T> * temp1 = NULL;
    struct nodeSL<T> * temp2 = NULL;
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
        temp1 = First;
        temp2 = First;
        for(i = 1; i<iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
        iCount--;           
    }
    
}

/////////////////////////////////////////////////////////////////
//
//Code of Doubly Circular
//
//////////////////////////////////////////////////////////////////
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


    return 0;
}