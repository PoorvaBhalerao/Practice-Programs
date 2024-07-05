//Write a program which displays product of all the elements from 
//Singly Linear Linked List
//Input LL:|5|->|2|->|6|->|3|->|1|->NULL
//Output: 180
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


unsigned int Product(PNODE First)
{
    unsigned int iProd = 1;
    PNODE temp = First;
    while(temp != NULL)
    {
        iProd = iProd * (temp->data);        
        temp = temp->next;
    }
    return iProd;
}

int main()
{
    PNODE Head = NULL;
    unsigned int iRet = 0;
    
    InsertFirst(&Head, 45);
    InsertFirst(&Head, 5);
    InsertFirst(&Head, 121);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);


    Display(Head);

    iRet = Product(Head);
    printf("Product of all the elements of Linked List is %u", iRet);
    
    return 0;
}
