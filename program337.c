//Singly Linear Linked List
//Insert at First position

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

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    return 0;
}