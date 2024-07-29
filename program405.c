//Queue
//EnQueue, DeQueue,Count, Display

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

void EnQueue(PPNODE First, int No)
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
}

int DeQueue(PPNODE First)
{
    if(*First == NULL)
    {
        printf("Unable to remove element as Queue is empty\n");
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
    printf("The Elements in Queue are:\n");
    while(First != NULL)
    {
        printf("%d\t",First->data);
        First = First->next;
    }
    printf("\n");
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

int main()
{
    PNODE Head = NULL;
    int iRet=0, iRet1=0;

    EnQueue(&Head, 112);
    EnQueue(&Head, 150);
    EnQueue(&Head, 216);
    EnQueue(&Head, 852);
    EnQueue(&Head, 182);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in Queue are: %d\n",iRet);

    iRet1 =DeQueue(&Head);
    printf("Removed element from Queue is: %d\n",iRet1);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in Queue are: %d\n",iRet);

    iRet1 =DeQueue(&Head);
    printf("Removed element from Queue is: %d\n",iRet1);

    iRet1 =DeQueue(&Head);
    printf("Removed element from Queue is: %d\n",iRet1);

    iRet1 =DeQueue(&Head);
    printf("Removed element from Queue is: %d\n",iRet1);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in Queue are: %d\n",iRet);

    return 0;
}
