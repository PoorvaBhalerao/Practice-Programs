// Single Linear Linked List
// Insert at First Node, Display, Count, Insert at Last node,
// Delete at First Node, Delete at Last Node,
// Insert at Position, Delete at Position.

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

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
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

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;
    
    if(*First == NULL)
    {
        printf("There is no NODE to delete.\n");
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        temp = *First;
        *First = temp->next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;
    
    if(*First == NULL)
    {
        printf("There is no NODE to delete.\n");
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        temp = *First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE First, int No, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iLength = 0;
    int i = 0;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    iLength = Count(*First);

    if(iPos < 1 || iPos >iLength+1)
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First, No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First, No);
    }
    else
    {
        temp = *First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }

}

void DeleteAtPos(PPNODE First, int iPos)
{
    PNODE temp = NULL;
    PNODE temp1 = NULL;
    int iLength;
    int i = 0;

    iLength= Count(*First);
    
    if(iPos < 1 || iPos > iLength)
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First);
    }
    else
    {
        temp =*First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        
        temp1 = temp->next->next;
        free(temp->next);
        temp->next = temp1;
    }
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 11);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 10);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements after InsertFirst: %d\n",iRet);

    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 20);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements after InsertLast: %d\n",iRet);

    DeleteFirst(&Head);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements after DeleteFirst: %d\n",iRet);

    DeleteLast(&Head);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements after DeleteLast: %d\n",iRet);

    InsertAtPos(&Head, 102, 4);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements after InsertAtPos4: %d\n",iRet);

    DeleteAtPos(&Head, 4);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements after DeleteAtPos4: %d\n",iRet);

    return 0;
}
