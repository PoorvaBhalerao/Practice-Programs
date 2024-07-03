//Write a program which return largest element from singly linear linked list.
//function prototype:
//int Maximum(PNODE Head);
// Input LL: |110|->|230|->|320|->|240|->NULL
// Output:320
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

int Maximum(PNODE First)
{
    int iMax = 0;
    iMax = First->data;
    while(First != NULL)
    {
        if((First->data) > iMax)
        {
            iMax = First->data;
        }
        First = First->next;
    }
    return iMax;
}

int main()
{
    PNODE Head = NULL;
    int iValue=0, i = 0,iRet = 0, iLargest = 0;
    int *Brr = NULL;

    printf("Enter the number of elements that you want to enter in LL: ");
    scanf("%d",&iValue);

    Brr = (int*)malloc(iValue * sizeof(int));  

    printf("Enter the elements: \n");
    for(i = 0; i<iValue; i++)
    {
        scanf("%d", &Brr[i]);
    }

    for(i = 0; i<iValue; i++)
    {
        InsertFirst(&Head, Brr[i]);
    }

    Display(Head);
    // iRet = Count(Head);
    // printf("Number of elements are: %d\n",iRet);

    iLargest = Maximum(Head);
    printf("Largest element in LL is: %d\n",iLargest);

    return 0;
}