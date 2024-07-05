//Write a program which displays all elements which are prime number from 
//Singly Linear Linked List
//Input LL:|11|->|28|->|17|->|14|->|6|->NULL
//Output: 11     17
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool isPrime(int No)
{
    int i = 0;
    bool bFlag = true;
    if(No <= 1)
    {
        return false;
    }

    for(i = 2 ; i<No; i++)
    {
        if(No % i == 0)
        {
            bFlag = false;
        }
    }

    return bFlag;
}

void DisplayPrime(PNODE First)
{
    PNODE temp = First;
    while(temp != NULL)
    {
        if(isPrime(temp->data))
        {
            printf("%d\t",temp->data);
        }
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    PNODE Head = NULL;
    
    InsertFirst(&Head, 50);
    InsertFirst(&Head, 5);
    InsertFirst(&Head, 550);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 11);


    Display(Head);

    DisplayPrime(Head);

    return 0;
}
