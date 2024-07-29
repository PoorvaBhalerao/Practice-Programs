//Stack
//Push, Pop, Count, Display

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

void Push(PPNODE First, int No)
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
}

int Pop(PPNODE First)
{
    if(*First == NULL)
    {
        printf("Unable to Pop as stack is empty\n");
        return -1;
    }
    else
    {
        int iValue = 0;
        PNODE temp = NULL;

        temp = *First;
        iValue = (*First)->data;
        *First = (*First)->next;
        free(temp);

        return iValue;
    }    
}

void Display(PNODE First)
{
    printf("Elements in stack are: \n");
    while(First != NULL)
    {
        printf("%d\n",First->data);
        First =First->next;
    }
    printf("\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First =First->next;
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iRet1 = 0;

    Push(&Head, 40);
    Push(&Head, 20);
    Push(&Head, 30);
    Push(&Head, 10);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in stack are: %d\n",iRet);

    iRet1 = Pop(&Head);
    printf("The Poped element from stack is : %d\n",iRet1);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in stack are: %d\n",iRet);

    iRet1 = Pop(&Head);
    printf("The Poped element from stack is : %d\n",iRet1);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in stack are: %d\n",iRet);

    return 0;
}