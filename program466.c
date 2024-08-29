//Singly linear linked list
//Insert at First Position, Insert at Last Position, Display elements, Count Elements.
//Insert at Position, Delete at Position
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
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}   //time complexity: O(1)...order of one

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}   //time complexity: O(N).... order of N(N is no of nodes in LL)

/*
void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}   //time complexity: O(N)
*/

void Display(PNODE First)
{
    if(First != NULL)
    {
        // printf("%d\t",First->data);          // Tail recursion
        // Display(First->next);                //from first pos to last
        
        Display(First->next);                   // Head Recursion
        printf("%d\t",First->data);             // reverse...from last to first
    }
    printf("\n");
}

/*
int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}   //time complexity: O(N)
*/

int Count(PNODE First)
{
    static int iCnt = 0;

    if(First != NULL)
    {
        iCnt++;
        First = First->next;
        Count(First);
    }
    return iCnt;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)        //Case 1
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if((*First) -> next == NULL)       //Case 2
    {
        free(*First);
        *First = NULL;
    }
    else        //Case 3
    {
        temp = *First;
        *First = (*First) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)        //Case 1
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if((*First) -> next == NULL)       //Case 2
    {
        free(*First);
        *First = NULL;
    }
    else        //Case 3
    {
        temp = *First;
        while(temp->next->next  != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
        
    }
}

void InsertAtPos(PPNODE First, int No, int iPos)
{
    int iLength = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;

    iLength = Count(*First);  //call by value

    if((iPos < 1) || (iPos > iLength+1))        //Case 1
    {
        printf("Invalid Position Entered\n");
        return;
    }

    if(iPos == 1)                               //Case 2
    {
        InsertFirst(First, No);  //call by address
    }
    else if(iPos == iLength+1)                  //Case 3
    {
        InsertLast(First, No);  //call by address
    }
    else                                        //Case 4
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        temp = *First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }
}

void DeleteAtPos(PPNODE First,int iPos)
{
    int iLength = 0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int i = 0;

    iLength = Count(*First);  //call by value

    if((iPos < 1) || (iPos > iLength))        //Case 1
    {
        printf("Invalid Position Entered\n");
        return;
    }

    if(iPos == 1)                               //Case 2
    {
        DeleteFirst(First);  //call by address
    }
    else if(iPos == iLength)                  //Case 3
    {
        DeleteLast(First);  //call by address
    }
    else                                        //Case 4
    {
        temp1 = *First;
        for(i = 1; i<iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp1 ->next->next;   //OR temp1->next = temp2->next;
        free(temp2);
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    //Display(Head);

    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 121);
    InsertLast(&Head, 151);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are: %d\n",iRet);



    return 0;
}

