//singly Linear Linked List in cpp  
//Count, InsertFirst, Display, InsertLast, DeleteFirst, DeleteLast, Insert At Position, Delete At Position
//Linked List of Character.

#include<iostream>
using namespace std;
struct node
{
    char data;
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
        
        void InsertFirst(char No);
        void InsertLast(char No);
        void InsertAtPos(char No, int iPos);

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

void SinglyLL::InsertFirst(char No)
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

void SinglyLL::InsertLast(char No)
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

void SinglyLL::InsertAtPos(char No, int iPos)
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

    obj.InsertFirst('A');
    obj.InsertFirst('B');
    obj.InsertFirst('C');

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj.InsertLast('a');
    obj.InsertLast('b');
    obj.InsertLast('c');

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

    obj.InsertAtPos('P',3);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    obj.DeleteAtPos(3);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl; 


    return 0;
}