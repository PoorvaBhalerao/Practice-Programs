//Write a program which return Smallest element from singly linear linked list.
//function prototype:
//int Maximum(PNODE Head);
// Input LL: |110|->|230|->|320|->|240|->NULL
// Output:110
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

int Minimum(PNODE First)
{
    int iMin = 0;
    iMin = First->data;
    while(First != NULL)
    {
        if((First->data) < iMin)
        {
            iMin = First->data;
        }
        First = First->next;
    }
    return iMin;
}

int main()
{
    PNODE Head = NULL;
    int iValue=0, i = 0,iRet = 0, iSmallest = 0;
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

    iSmallest = Minimum(Head);
    printf("Smallest element in LL is: %d\n",iSmallest);

    return 0;
}