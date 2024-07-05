//Write a program which displays smallest digits of all the elements from 
//Singly Linear Linked List
//Input LL:|15|->|254|->|6|->|853|->|756|->NULL
//Output:   1   2   6   3   5
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


void DisplaySmallest(PNODE First)
{
    int iMin = 0, iDigit = 0;
    PNODE temp = First;
    while(temp != NULL)
    {
        iMin = 10;      // we havee to compare digit with this number so 10 is taken
        while((temp->data) != 0)
        {
            iDigit = (temp->data) % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            temp->data = (temp->data)/10;
        }
        printf("%d\t",iMin);
        temp = temp->next;
    }
}

int main()
{
    PNODE Head = NULL;
    unsigned int iRet = 0;
    
    InsertFirst(&Head, 45);
    InsertFirst(&Head, 5);
    InsertFirst(&Head, 121);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 15);


    Display(Head);

    DisplaySmallest(Head);
    
    return 0;
}
