//Write a program which displays all the palindrome elements from 
//Singly Linear Linked List
//Input LL:|11|->|5|->|17|->|141|->|6|->NULL
//Output: 11    5   141
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

bool isPallindrome(int No)
{
    int iOriginal = No;
    int iRev = 0, iDigit = 0;
    while(No != 0)
    {
        iDigit = No % 10;
        iRev = iRev * 10 + iDigit;
        No = No/10;
    }
    if(iOriginal == iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DisplayPallindrome(PNODE First)
{
    PNODE temp = First;
    while(temp != NULL)
    {
        if(isPallindrome(temp->data))
        {
            printf("%d\t",temp->data);
        }
        
        temp = temp->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    
    InsertFirst(&Head, 45);
    InsertFirst(&Head, 5);
    InsertFirst(&Head, 121);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);


    Display(Head);

    DisplayPallindrome(Head);
    
    return 0;
}
