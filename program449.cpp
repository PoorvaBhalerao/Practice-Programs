//singly Linear Linked List in cpp  
//Count, InsertFirst, Display, InsertLast, DeleteFirst, DeleteLast, Insert At Position, Delete At Position
//Linked List of Float.

#include<iostream>
using namespace std;
struct node
{
    float data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private:
        PNODE First;
        int iCount;

    public:
        SinglyLL();     //prototype of default constructor which is defined outside class

        void Display();
        int Count();
        
        void InsertFirst(float No);
        void InsertLast(float No);
        void InsertAtPos(float No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyLL::SinglyLL()    //constructor is defined with class name and scope resolution operator
{
    //cout<<"Inside Constructor"<<endl;
    First = NULL;
    iCount = 0;
}

void SinglyLL::Display()
{
    PNODE temp = NULL;  //temp pointer is needed because first is main pointer 
                        //position of First to point to First elements cant be changed
    temp = First;
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int SinglyLL::Count()
{
    return iCount;
}

void SinglyLL::InsertFirst(float No)
{
    PNODE newn = NULL;

    newn = new NODE;    //allocate dynamic memory

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

void SinglyLL::InsertLast(float No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;    //allocate dynamic memory

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

void SinglyLL::InsertAtPos(float No, int iPos)
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
        PNODE newn = NULL;
        PNODE temp = NULL;

        newn = new NODE;
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

void SinglyLL::DeleteFirst()
{
    PNODE temp = NULL;
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

void SinglyLL::DeleteLast()
{
    PNODE temp = NULL;
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

void SinglyLL::DeleteAtPos(int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
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
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51.90f);
    obj.InsertFirst(21.90f);
    obj.InsertFirst(11.90f);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj.InsertLast(101.90f);
    obj.InsertLast(111.90f);
    obj.InsertLast(121.90f);

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

    obj.InsertAtPos(121.90f,3);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    obj.DeleteAtPos(3);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    return 0;
}