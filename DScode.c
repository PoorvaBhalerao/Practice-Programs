// Write a data structurre code for inserting node in first, middle and last position.

#include<stdio.h>
#include<stdlib.h>

struct Node     //Structure Definition
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

/*-----------------------------------------------------
        Old Name                    New Name
-------------------------------------------------------
        struct Node                 NODE
        struct Node*                PNODE
        struct Node**               PPNODE
-------------------------------------------------------

////////////////////////////////////////////////////////
//
//Fucntion name:    InsertFirst
//Description  :    Used to insert at first position of Linked List
//Parameters   :    Address of First pointer and data of node
//Return value :    void
//
///////////////////////////////////////////////////////
*/

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));     //Allocate memory
    newn->data = no;    // Initialise data
    newn->next = NULL;  //Initialise pointer

    if(*Head == NULL)   //LinkedList is empty
    {
        *Head = newn;
    }
    else    //LL contains atleast one node
    {
        newn->next = *Head;
        *Head = newn;
    }
}

/*
////////////////////////////////////////////////////////
//
//Fucntion name:    InsertLast
//Description  :    Used to insert at last position of Linked List
//Parameters   :    Address of First pointer and data of node
//Return value :    void
//
///////////////////////////////////////////////////////
*/

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));     //Allocate memory
    newn->data = no;    //Initialise data
    newn->next = NULL;  //Initialise pointer

    if(*Head == NULL)   //LinkedList is empty
    {
        *Head = newn;
    }
    else    //LL contains atleast one node
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

/*
////////////////////////////////////////////////////////
//
//Fucntion name:    Display
//Description  :    Used to display elements of Linked List
//Parameters   :    First pointer
//Return value :    void
//
///////////////////////////////////////////////////////
*/

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t", Head->data);
        Head = Head -> next;
    }
}

/*
////////////////////////////////////////////////////////
//
//Fucntion name:    Count
//Description  :    Used to count elements of Linked List
//Parameters   :    First pointer
//Return value :    int
//
///////////////////////////////////////////////////////
*/

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Count(First);

    printf("\nNumber of elements are : %d\n",iRet);

    InsertLast(&First, 101);
    InsertLast(&First, 111);

    Display(First);

    iRet = Count(First);

    printf("\nNumber of elements are : %d\n",iRet);    

    return 0;
}

