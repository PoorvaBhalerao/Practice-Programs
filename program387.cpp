//Singly Circular Linked List in Cpp
//InsertFirst, InsertLast, Display, Count, InsertAtPos, DeleteFirst, DeleteLast, DeleteAtPos

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class singlyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        singlyCL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

singlyCL::singlyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void singlyCL::Display()
{
    if((First == NULL) && (Last == NULL))       //Filter
    {
        printf("LL is empty\n");
        return;
    }

    cout<<"->";
    do 
    {
        cout<<" | "<<First->data<<" |->";
        First = First->next;
    }while(First != Last->next);
    cout<<endl;
}

int singlyCL::Count()
{
    return iCount;
}

void singlyCL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        //(Last)->next = First;
    }
    else
    {
        newn->next = First;
        First = newn;
        //(Last)->next = First;
    }
    (Last)->next = First;
    iCount++;
}

void singlyCL::InsertLast(int No)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        //(Last)->next = First;
    }
    else
    {
        Last->next = newn;
        Last = newn;
        //(Last)->next = First;
    }   
    Last->next = First;
    iCount++;
}

void singlyCL::InsertAtPos(int No, int iPos)
{
    PNODE temp = NULL;
    int iLength = 0, i = 0;
    iLength = iCount;

    if(iPos < 1 || iPos > iLength+1)
    {
        cout<<"Invalid Position Entered"<<endl;
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

        temp = First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

void singlyCL::DeleteFirst()
{
    if((First == NULL) && (Last ==NULL))
    {
        cout<<"Unable to delete as LL is empty"<<endl;
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;
        Last->next = First;
    }
    iCount--;
}

void singlyCL::DeleteLast()
{
    if((First == NULL) && (Last ==NULL))
    {
        cout<<"Unable to delete as LL is empty"<<endl;
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = First;
        while(temp->next != Last)
        {
            temp = temp->next;
        }
        delete temp->next;
        Last = temp;
        Last->next = First;
    }
    iCount--;
}

void singlyCL::DeleteAtPos(int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iLength = 0, i = 0;
    iLength = iCount;

    if(iPos < 1 || iPos > iLength)
    {
        cout<<"Invalid Position Entered"<<endl;
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
            temp1= temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
        iCount--;
    }
}


int main()
{
    singlyCL obj;
    int iRet = 0;

    obj.InsertFirst(10);
    obj.InsertFirst(20);
    obj.InsertFirst(30);
    obj.InsertFirst(50);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj.InsertLast(75);
    obj.InsertLast(80);
    obj.InsertLast(100);
    obj.InsertLast(200);

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

    obj.InsertAtPos(111, 2);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    obj.DeleteAtPos(2);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;     

    return 0;
}