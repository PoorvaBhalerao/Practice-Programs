//Write a program which displays all elements which are perfect number from 
//Singly Linear Linked List
//Input LL:|11|->|28|->|17|->|14|->|6|->NULL
//Output: 6     28
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

bool isPerfect(int No)
{
    int iSum = 0, i = 0;
    if(No < 1)
    {
        return false;
    }

    for(i = 1; i<No; i++)
    {
        if(No % i == 0)
        {
            iSum = iSum + i;
        }
    }

    if(iSum == No)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

void DisplayPerfect(PNODE First)
{
    PNODE temp = First;
    while(temp != NULL)
    {
        if(isPerfect(temp->data))
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
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 550);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 18);


    Display(Head);

    DisplayPerfect(Head);

    return 0;
}
