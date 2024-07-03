//Write a program which search Last occurence of particular element from 
// singly linear linked list.
// Function should return position at which element is found.
//Input linked list: |10|->|20|->|30|->|40|->|50|->|30|->|70|
// Input element: 30
// Output: 6
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

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
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

int SearchLastOcc(PNODE First, int No)
{
    int iPos = 0;
    int CurrentPos = 1;
    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = CurrentPos;
        }        
        First= First->next;
        CurrentPos++;
    }
    if(iPos >= 1)
    {
        return iPos;
    }
    else
    {
        return -1;
    }    

}

int main()
{
    PNODE Head = NULL;
    int iRet = 0, iValue = 0;
    int iPos = 0;
    
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 40);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 10);

    Display(Head);
    // iRet = Count(Head);
    // printf("Number of elements are %d\n",iRet);

    printf("Enter a Number: ");
    scanf("%d", &iValue);
    
    iPos = SearchLastOcc(Head, iValue);
    if(iPos== -1)
    {
        printf("There is no element found in LL\n");
    }
    else
    {
        printf("Position of Last Occurece of %d in SLL is %d",iValue,iPos);
    }

    return 0;
}
