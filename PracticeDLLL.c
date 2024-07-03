//Doubly Linear Linked List
//Insert at First, Insert At Last, Display, Count, Delete at First, Delete at Last, Insert at position, Delete at Position

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

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
        newn->prev = temp;
    }
}

void Display(PNODE First)
{
    printf("NULL <=> ");
    while(First != NULL)
    {
        printf(" %d <=> ",First->data);
        First= First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First= First->next;
    }
    return iCnt;
}

void InsertAtPos(PPNODE First, int No, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iLength = 0;
    int i = 0;

    iLength = Count(*First);

    if(iPos <1 || iPos > iLength+1)
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First, No);
    }
    else if(iPos == iLength + 1)
    {
        InsertLast(First, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->prev = temp;
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
    }  
}

void DeleteFirst(PPNODE First)
{
    if(*First == NULL)
    {
        printf("There is no NODE to delete\n");
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*First)->prev);
        (*First)->prev = NULL;
    }

}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        printf("There is no NODE to delete\n");
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

void DeleteAtPos(PPNODE First, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    
    int iLength = 0;
    int i = 0;

    iLength = Count(*First);

    if(iPos <1 || iPos > iLength)
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
        temp = *First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        temp->next= temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }   

}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 50);
    InsertFirst(&Head, 60);
    InsertFirst(&Head, 70);
    InsertFirst(&Head, 80);
    InsertFirst(&Head, 90);


    InsertLast(&Head, 10);
    InsertLast(&Head, 20);
    InsertLast(&Head, 30);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are: %d\n", iRet);

    DeleteFirst(&Head);
    
    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are: %d\n", iRet);

    DeleteLast(&Head);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are: %d\n", iRet);

    InsertAtPos(&Head, 100, 4);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are: %d\n", iRet);

    DeleteAtPos(&Head, 4);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are: %d\n", iRet);

    return 0;
}