//Doubly Linear Linked List using cpp with correct access specifier
//InsertFirst, InsertLast, Display, Count, DeleteFirst, DeleteLast
//Insert At Position, Delete At Position.
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoulbyLL
{
    public:
        PNODE First;
        int iCount;

    public:
        
        DoulbyLL();

        void Display();
        int Count();
        
        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoulbyLL::DoulbyLL()
{
    First = NULL;
    iCount = 0;
}

void DoulbyLL::Display()
{
    PNODE temp = NULL;
    temp = First;
    cout<<"NULL <=> ";
    while(temp != NULL)
    {
        cout<<" "<<temp->data<<" <=>";
        temp = temp->next;
    }
    cout<<" NULL"<<endl;
}

int DoulbyLL::Count()
{
    return iCount;
}
        
void DoulbyLL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;
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

void DoulbyLL::InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;
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
        
void DoulbyLL::InsertAtPos(int No, int iPos)
{
    PNODE temp = NULL;
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
        PNODE newn = NULL;
        newn = new NODE;

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

void DoulbyLL::DeleteFirst()
{
    PNODE temp = NULL;

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

void DoulbyLL::DeleteLast()
{
    PNODE temp = NULL;

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
        
void DoulbyLL::DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
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
    DoulbyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj.DeleteFirst();

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    obj.InsertAtPos(121,3);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    obj.DeleteAtPos(3);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    return 0;

}
