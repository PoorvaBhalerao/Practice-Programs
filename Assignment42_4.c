//Write a program which displays second maximum element from 
//Singly Linear Linked List
//Input LL:|11|->|28|->|17|->|14|->|6|->NULL
//Output: 17
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
        *First= newn;
    }
    else 
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Entered elements are: \n");
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int SecondMax(PNODE First)
{
    int iMax1 = 0, iMax2 = 0;
    PNODE temp = First;
    while(temp != NULL)
    {
        if((temp->data) > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = temp->data;
        }
        else if(((temp->data) > iMax2) && ((temp->data) != iMax1))
        {
            iMax2 = temp->data;
        }
        temp = temp->next;
    }
    return iMax2;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    
    InsertFirst(&Head, 50);
    InsertFirst(&Head, 5);
    InsertFirst(&Head, 550);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 11);


    Display(Head);

    iRet = SecondMax(Head);
    printf("Second Maximum element is: %d",iRet);

    return 0;
}
