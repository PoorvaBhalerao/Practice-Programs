// Doubly Circular Linked List
//Constructor declaration , COunt

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
{}

int DoublyCL::Count()
{
    return iCount;
}

void DoublyCL::InsertFirst(int No)
{}

void DoublyCL::InsertLast(int No)
{}

void DoublyCL::InsertAtPos(int No, int iPos)
{}

void DoublyCL::DeleteFirst()
{}

void DoublyCL::DeleteLast()
{}

void DoublyCL::DeleteAtPos(int iPos)
{}


int main()
{
    DoublyCL obj;

    obj.InsertFirst(50);
    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertFirst(20);

    

    return 0;
}