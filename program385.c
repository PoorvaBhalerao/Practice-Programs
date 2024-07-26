//Singly Circular Linked List.
//InsertFirst, InsertLast, Display with Filter., Count, DeleteFirst, DeleteLast.
//Insert At Position
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

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
        //(*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        *First = newn;
        //(*Last)->next= *First;
    }
    (*Last)->next = *First;     //Instead of writing the sentence in if as well as in else we csn write at the end    
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
        //(*Last)->next = *First;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
        //(*Last)->next = *First;
    }
    (*Last)->next = *First;
}

void Display(PNODE First, PNODE Last)
{
    if((First == NULL) && (Last == NULL))       //Filter
    {
        printf("LL is empty\n");
        return;
    }
    printf("-> ");
    do
    {
        printf(" | %d | ->",First->data);
        First = First->next;
    }while(First != Last->next);

    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCount = 0;
    if((First == NULL) && (Last == NULL))       //Filter
    {
        return 0;
    }
   
    do
    {
        iCount++;
        First = First->next;
    }while(First != Last->next);
    
    return iCount;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First ==NULL) && (*Last == NULL))  // Empty LL
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if(*First == *Last)   //Single node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else    // More than one node
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = NULL;
    if((*First ==NULL) && (*Last == NULL))  // Empty LL
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if(*First == *Last)   //Single node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else    // More than one node
    {
        temp = *First;
        while(temp->next != *Last)
        {
            temp = temp->next;
        }
        *Last = temp;
        free(temp->next);
        (*Last)->next = *First;
    }
}

void InsertAtPos(PPNODE First, PPNODE Last, int No, int iPos)
{
    int i = 0;
    int iLength;

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
    else if(iPos == iLength+ 1)
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

        temp = *First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    //Display(Head, Tail);        // it gives segmentation fault so filter is written in Display Function

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements in SinglyCL is %d\n",iRet);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements in SinglyCL is %d\n",iRet);

    DeleteFirst(&Head, &Tail);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements in SinglyCL is %d\n",iRet);

    DeleteLast(&Head,&Tail);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements in SinglyCL is %d\n",iRet);

    InsertAtPos(&Head, &Tail, 105, 3);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements in SinglyCL is %d\n",iRet);

    
    return 0;
}