//Write a program which displays addition of all even elements from 
//Singly Linear Linked List
//Input LL:|11|->|28|->|17|->|14|->|6|->NULL
//Output: 48
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

int AdditionEven(PNODE First)
{
    int iSum = 0;
    PNODE temp = First;
    while(temp != NULL)
    {
        if((temp->data) % 2 == 0)
        {
            iSum = iSum + (temp->data);
        }
        temp = temp->next;
    }
    return iSum;
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

    iRet = AdditionEven(Head);
    printf("Addition of all elements is: %d",iRet);

    return 0;
}
