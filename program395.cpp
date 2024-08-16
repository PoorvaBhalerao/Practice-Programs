// Doubly Circular Linked List
//Constructor declaration , COunt, InsertFirst, InsertLast, Display, 
//DeleteFirst, DeleteLast.

#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:

        DoublyCL();         //Constructor

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyCL::DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void DoublyCL::Display()
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

int DoublyCL::Count()
{
    return iCount;
}

void DoublyCL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;
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

void DoublyCL::InsertLast(int No)
{
    PNODE newn = NULL;

    newn = new NODE;
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

void DoublyCL::InsertAtPos(int No, int iPos)
{}

void DoublyCL::DeleteFirst()
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

void DoublyCL::DeleteLast()
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
        // PNODE temp = NULL;
        // temp = First;
        // while(temp->next != Last)
        // {
        //     temp = temp->next;
        // }
        // Last = temp;
        // delete temp->next;
        // Last->next = First;
        // First->prev = Last;
        //OR

        Last = Last->prev;
        delete First->prev;
        Last->next = First;
        First->prev = Last;

    }
    iCount--;
}

void DoublyCL::DeleteAtPos(int iPos)
{}


int main()
{
    int iRet = 0;
    DoublyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(151);

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

    

   

    return 0;
}