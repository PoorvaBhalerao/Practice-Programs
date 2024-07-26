//Singly Circular Linked List.
//InsertFirst, InsertLast, Display with Filter., Count

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

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    //Display(Head, Tail);        // it gives segmentation fault so filter is written in Display Function

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements in SinglyCL is %d",iRet);
    
    return 0;
}