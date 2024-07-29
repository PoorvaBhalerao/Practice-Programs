//Doubly Circular Linked List
//InsertFirst, InsertLast, Display, Count, DeleteFirst, DeleteLast, Insert At Position, Delete At Position

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL && *Last == NULL)
    {
        *First = newn;
        *Last = newn;
        // (*First)->prev = *Last;
        // (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
        // (*First)->prev = *Last;
        // (*Last)->next= *First; 
    }
    (*First)->prev = *Last;
    (*Last)->next = *First;
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL && *Last == NULL)
    {
        *First = newn;
        *Last = newn;
        // (*First)->prev = *Last;
        // (*Last)->next = *First;
    }
    else
    {
        (*Last)->next = newn;
        newn ->prev = *Last;
        *Last = newn;
        // (*Last)->next = *First;
        // (*First)->prev = *Last;
    }
    (*First)->prev = *Last;
    (*Last)->next = *First;
}

void Display(PNODE First, PNODE Last)
{
    if(*First == NULL && *Last == NULL)
    {
        cout<<"Linked List is Empty"<<endl;
        return;
    }

    printf(" <=> ");
    do
    {
        printf("| %d | <=> ",First->data);
        First = First->next;
    }while((First != (Last)->next));
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First->next;
    }while((First != (Last)->next) && (Last != (First)->prev));
    return iCnt;
}

void InsertAtPos(PPNODE First, PPNODE Last, int No, int iPos)
{
    int iLength = 0, i = 0;
    iLength = Count(*First, *Last);

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First, Last, No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First, Last, No);
    }
    else
    {
        PNODE newn = NULL;
        PNODE temp = NULL;

        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *First;
        for(i = 1; i<iPos-1; i++)
        {
            temp= temp->next;
        }
        newn->next = temp->next;
        newn->prev = temp;
        temp->next = newn;
        newn->next->prev = newn;        
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = *First;
        while(temp->next != *Last)
        {
            temp = temp->next;
        }
        *Last = temp;
        free(temp->next);
        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
}

void DeleteAtPos(PPNODE First ,PPNODE Last, int iPos)
{
    int iLength = 0, i = 0;
    iLength = Count(*First, *Last);

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First, Last);
    }
    else
    {
        PNODE temp = NULL;
        temp = *First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;        
    }

}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head, &Tail, 10);
    InsertFirst(&Head, &Tail, 20);
    InsertFirst(&Head, &Tail, 30);
    InsertFirst(&Head, &Tail, 40);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are: %d\n",iRet);

    InsertLast(&Head, &Tail, 100);
    InsertLast(&Head, &Tail, 200);
    InsertLast(&Head, &Tail, 300);
    InsertLast(&Head, &Tail, 400);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are: %d\n",iRet);

    DeleteFirst(&Head, &Tail);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are: %d\n",iRet);

    DeleteLast(&Head, &Tail);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are: %d\n",iRet);

    InsertAtPos(&Head, &Tail, 510, 3);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are: %d\n",iRet);

    DeleteAtPos(&Head, &Tail, 3);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are: %d\n",iRet);

    return 0;
}