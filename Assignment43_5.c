//Write a program which displays Largest digits of all the elements from 
//Singly Linear Linked List
//Input LL:|15|->|264|->|68|->|853|->|756|->NULL
//Output:   5   6   8   8   7
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


void DisplayLargestDigit(PNODE First)
{
    int iMax = 0, iDigit = 0;
    PNODE temp = First;
    while(temp != NULL)
    {
        iMax = 0;      // because we have to compare it with other digits so initially it is set to 0
        while((temp->data) != 0)
        {
            iDigit = (temp->data) % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            temp->data = (temp->data)/10;
        }
        printf("%d\t",iMax);
        temp = temp->next;
    }
}

int main()
{
    PNODE Head = NULL;
    unsigned int iRet = 0;
    
    InsertFirst(&Head, 852);
    InsertFirst(&Head, 5);
    InsertFirst(&Head, 96);
    InsertFirst(&Head, 12);
    InsertFirst(&Head, 75);


    Display(Head);

    DisplayLargestDigit(Head);
    
    return 0;
}
