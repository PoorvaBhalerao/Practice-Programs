//Generic singly Linear Linked List in cpp  


#include<iostream>
using namespace std;

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
        iCount--;           // it is important position of iCount-- because at DeleteFirst and DeleteLast we already decremented iCount.
    }
    
}

int main()
{
    //LL of Integer
    cout<<"-------------------------LL of integers-----------------------"<<endl;

    SinglyLL<int> *iobj = new SinglyLL<int>();
    int iRet = 0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);

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

    iobj->InsertAtPos(121,3);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    iobj->DeleteAtPos(3);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    //LL of Character
    cout<<"-------------------------LL of characters-----------------------"<<endl;


    SinglyLL<char> *cobj = new SinglyLL<char>();

    cobj->InsertFirst('A');
    cobj->InsertFirst('B');
    cobj->InsertFirst('C');

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobj->InsertLast('D');
    cobj->InsertLast('F');
    cobj->InsertLast('G');

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobj->DeleteFirst();

    iobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobj->DeleteLast();

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    cobj->InsertAtPos('P',3);

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    cobj->DeleteAtPos(3);

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    //LL of Float
    cout<<"-------------------------LL of floats-----------------------"<<endl;


    SinglyLL<float> *fobj = new SinglyLL<float>();

    fobj->InsertFirst(51.99f);
    fobj->InsertFirst(21.99f);
    fobj->InsertFirst(11.99f);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobj->InsertLast(101.99f);
    fobj->InsertLast(111.99f);
    fobj->InsertLast(121.99f);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobj->DeleteFirst();

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobj->DeleteLast();

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    fobj->InsertAtPos(121.99f,3);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    fobj->DeleteAtPos(3);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    //LL of double
    cout<<"-------------------------LL of doubles-----------------------"<<endl;


    SinglyLL<double> *dobj = new SinglyLL<double>();

    dobj->InsertFirst(51.2563);
    dobj->InsertFirst(21.2563);
    dobj->InsertFirst(11.2563);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobj->InsertLast(101.2563);
    dobj->InsertLast(111.2563);
    dobj->InsertLast(121.2563);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobj->DeleteFirst();

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobj->DeleteLast();

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    dobj->InsertAtPos(121.2563,3);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    dobj->DeleteAtPos(3);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl; 

    return 0;
}