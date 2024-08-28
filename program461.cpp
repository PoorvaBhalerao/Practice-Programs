//Singly Circular Linked List in Cpp
//InsertFirst, InsertLast, Display, Count, InsertAtPos, DeleteFirst, DeleteLast, DeleteAtPos
//Generic linked List and node to nodeSC

#include<iostream>
using namespace std;

template <class T>
struct nodeSC
{
    T data;
    struct nodeSC *next;
};

template <class T>
class singlyCL
{
    private:
        struct nodeSC<T> * First;
        struct nodeSC<T> * Last;
        int iCount;

    public:
        singlyCL();

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
singlyCL<T>::singlyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void singlyCL<T>::Display()
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

template <class T>
int singlyCL<T>::Count()
{
    return iCount;
}

template <class T>
void singlyCL<T>::InsertFirst(T No)
{
    struct nodeSC<T> * newn = NULL;

    newn = new struct nodeSC<T>;
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

template <class T>
void singlyCL<T>::InsertLast(T No)
{
    struct nodeSC<T> * newn = NULL;

    newn = new struct nodeSC<T>;
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

template <class T>
void singlyCL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeSC<T> * temp = NULL;
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
        struct nodeSC<T> * newn = NULL;
        newn = new struct nodeSC<T>;
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

template <class T>
void singlyCL<T>::DeleteFirst()
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

template <class T>
void singlyCL<T>::DeleteLast()
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
        struct nodeSC<T> * temp = NULL;
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

template <class T>
void singlyCL<T>::DeleteAtPos(int iPos)
{
    struct nodeSC<T> * temp1 = NULL;
    struct nodeSC<T> * temp2 = NULL;
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
    
    singlyCL<int> *iSCobj = new singlyCL<int>();
    int iRet = 0;

    iSCobj->InsertFirst(10);
    iSCobj->InsertFirst(20);
    iSCobj->InsertFirst(30);
    iSCobj->InsertFirst(50);

    iSCobj->Display();
    iRet = iSCobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iSCobj->InsertLast(75);
    iSCobj->InsertLast(80);
    iSCobj->InsertLast(100);
    iSCobj->InsertLast(200);

    iSCobj->Display();
    iRet = iSCobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iSCobj->DeleteFirst();

    iSCobj->Display();
    iRet = iSCobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iSCobj->DeleteLast();

    iSCobj->Display();
    iRet = iSCobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iSCobj->InsertAtPos(111, 2);

    iSCobj->Display();
    iRet = iSCobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    iSCobj->DeleteAtPos(2);

    iSCobj->Display();
    iRet = iSCobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;     

    return 0;
}