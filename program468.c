//Binary Search Tree
//Insert, traversal(Inorder, Preorder, Postorder)

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Insert(PPNODE Root, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Root == NULL)   //Tree is empty
    {
        *Root = newn;
    }
    else               //Tree contains at least one node
    {
        temp = *Root;

        while(1)
        {
            if(temp->data == No)
            {
                printf("Unable to insert node as element is already present\n");
                free(newn);
                break;
            }
            else if(No > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
        }
    }
}

void Inorder(PNODE Root)
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        printf("%d\n",Root->data);
        Inorder(Root->rchild);
    }
}

void Preorder(PNODE Root)
{
    if(Root != NULL)
    {
        printf("%d\n",Root->data);
        Preorder(Root->lchild);        
        Preorder(Root->rchild);
    }
}

void Postorder(PNODE Root)
{
    if(Root != NULL)
    {
        Postorder(Root->lchild);        
        Postorder(Root->rchild);
        printf("%d\n",Root->data);
    }
}

int main()
{
    PNODE Head = NULL;

    Insert(&Head,50);
    Insert(&Head,65);
    Insert(&Head,75);
    Insert(&Head,99);
    Insert(&Head,91);
    Insert(&Head,13);
    Insert(&Head,17);
    Insert(&Head,23);
    Insert(&Head,77);
    Insert(&Head,63);
    
    printf("Inorder traversal: \n");
    Inorder(Head);

    printf("Preorder traversal: \n");
    Preorder(Head);
    
    printf("Postorder traversal: \n");
    Postorder(Head);

    return 0;
}