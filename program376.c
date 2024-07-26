//Singly Circular Linked List.
//InsertFirst, InsertLast

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
    printf("-> ");
    while(First->next != Last)
    {
        printf(" | %d | -> ",First->data);
        First = First->next;
    }
    printf("\n");
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head, Tail);
    // iRet = Count(Head, Tail);


    return 0;
}