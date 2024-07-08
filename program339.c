//Singly Linear Linked List
//Display LL

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
        printf("%d\t", First->data);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 101);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    return 0;
}