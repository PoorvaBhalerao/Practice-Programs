//Write a program which revers each element from 
//Singly Linear Linked List
//Input LL:|11|->|28|->|17|->|14|->|6|->NULL
//Output: 11    82      71      41      6
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

int ReverseDigits(int No)
{
    int iDigit = 0,iRev = 0;
    while(No != 0)
    {
        iDigit = No % 10;
        iRev = iRev * 10 +iDigit;
        No = No /10;
    }   
    return iRev;
}

void Reverse(PNODE First)
{
    PNODE temp = First;
    while(temp != NULL)
    {
        temp->data = ReverseDigits(temp->data);
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    
    InsertFirst(&Head, 45);
    InsertFirst(&Head, 5);
    InsertFirst(&Head, 874);
    InsertFirst(&Head, 2315);
    InsertFirst(&Head, 11);


    Display(Head);

    Reverse(Head);
    
    return 0;
}
