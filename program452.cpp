//singly Linear Linked List in cpp  
//Count, InsertFirst, Display, InsertLast, DeleteFirst, DeleteLast, Insert At Position, Delete At Position
//Generic Linked List

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

//In case of generic implementation we cannot use the concept of typedef
// typedef struct node NODE;
// typedef struct node * PNODE;
//In case of generic implementation we cannot use the concept of typedef

template <class T>
class SinglyLL
{
    private:
        struct node<T> * First;
        int iCount;

    public:
        SinglyLL();     //prototype of default constructor which is defined outside class

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
    struct node<T> * temp = NULL;  
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
    struct node<T> * newn = NULL;

    newn = new struct node<T>;    //allocate dynamic memory

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
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

    newn = new struct node<T>;    //allocate dynamic memory

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
        struct node<T> * newn = NULL;
        struct node<T> * temp = NULL;

        newn = new struct node<T>;
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
    struct node<T> * temp = NULL;
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
    struct node<T> * temp = NULL;
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
    struct node<T> * temp1 = NULL;
    struct node<T> * temp2 = NULL;
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
        iCount--;           // it is important position of iCount-- because at DeleteFirst and DeleteLast we already decremented iCount.
    }
    
}

int main()
{
    //SinglyLL obj;     static object not required here

    SinglyLL<int> *obj = new SinglyLL<int>();
    int iRet = 0;

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj->InsertLast(101);
    obj->InsertLast(111);
    obj->InsertLast(121);

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj->DeleteFirst();

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj->DeleteLast();

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    obj->InsertAtPos(121,3);

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    obj->DeleteAtPos(3);

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 


    return 0;
}