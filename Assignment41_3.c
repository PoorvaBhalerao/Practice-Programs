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

int Addition(PNODE First)
{
    int iSum = 0;
    while(First != NULL)
    {
        iSum = iSum + First->data;    
        First= First->next;
    }
    return iSum;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0, iAdd = 0, iCount = 0, i=0;
    
    int *Brr = NULL;

    printf("Enter number of elements that you want to enter in LL: \n");   
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));   

    printf("Enter the elements:\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }
    
    for(i = 0; i<iCount; i++)
    {
        InsertFirst(&Head, Brr[i]);
    }
    
    Display(Head);
    // iRet = Count(Head);
    // printf("Number of elements are %d\n",iRet);

    iAdd = Addition(Head);
    printf("Addition of all elements of LL is %d\n",iAdd);

    return 0;
}
