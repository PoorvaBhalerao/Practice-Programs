//Singly Linear Linked List
//Insert at First position and Display LL(in decorative way)
//Count no of nodes.
//Insert ar last position.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    // Step 1: Allocate dynamic memory for New node
    newn = (PNODE)malloc(sizeof(NODE));

    // Step 2 : Initialise new node
    newn->data = No;
    newn->next = NULL;

    // Step 3: Check if Linked List is empty
    if(*First == NULL)
    {
        *First = newn;
    }
    else    // If Linked List contains at least one node in it
    {
        temp = *First;      //Head
        while((temp -> next) != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;  
    }
}


void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    // Step 1: Allocate dynamic memory for New node
    newn = (PNODE)malloc(sizeof(NODE));

    // Step 2 : Initialise new node
    newn->data = No;
    newn->next = NULL;

    // Step 3: Check if Linked List is empty
    if(*First == NULL)
    {
        *First = newn;
    }
    else    // If Linked List contains at least one node in it
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 101);    //call by address
    InsertFirst(&Head, 51);     //call by address
    InsertFirst(&Head, 21);     //call by address
    InsertFirst(&Head, 11);     //call by address

    Display(Head);      //call by value

    iRet = Count(Head);     //call by value
    printf("Number of elements are: %d\n",iRet);

    InsertLast(&Head, 111);     //call by address
    InsertLast(&Head, 121);     //call by address
    InsertLast(&Head, 151);     //call by address

    Display(Head);      //call by value

    iRet = Count(Head);     //call by value
    printf("Number of elements are: %d\n",iRet);

    return 0;
}