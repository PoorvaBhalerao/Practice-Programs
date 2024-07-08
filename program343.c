//Singly linear linked list
//Insert at First Position, Insert at Last Position, Display elements, Count Elements.
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
}   //time complexity: O(1)...order of one

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
}   //time cpmplexity: O(N).... order of N(N is no of nodes in LL)

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}   //time cpmplexity: O(N)

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}   //time cpmplexity: O(N)

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    // Display(Head);

    // iRet = Count(Head);
    // printf("Number of elements is: %d\n",iRet);

    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 121);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements is: %d\n",iRet);

    return 0;
}

/*
INSERTFIRST
1:  create a node
2:  Allocate memory for node
3:  Initialise the node
4:  Check whether LL is empty or not
5:  If LL is empty store the address of new node to Head pointer through First
6:  otherwise store the address of old first node in next of new node.
7:  Update the HEad accordingly
*/