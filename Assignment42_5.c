//Write a program which displays second maximum element from 
//Singly Linear Linked List
//Input LL:|11|->|28|->|17|->|14|->|6|->NULL
//Output: 2   10    8   5   6
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

void AdditionDigits(PNODE First)
{
    int iSum = 0, iDigit = 0;
    PNODE temp = First;
    while(temp != NULL)
    {
        while((temp->data) != 0)
        {
            iDigit = (temp->data) % 10;
            iSum = iSum + iDigit;
            temp->data = (temp->data) /10; 
        }
        printf("%d\t",iSum);
        iSum = 0;
        temp = temp->next;
    }
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

    AdditionDigits(Head);
    
    return 0;
}
