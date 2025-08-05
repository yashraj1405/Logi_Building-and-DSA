#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*head == NULL)   // Tree is empty
    {
        *head = newn;
    }
    else    // Tree contains atleast one node
    {
        temp = *head;

        while(1)
        {
            if(no > temp->data) // Greater
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp -> rchild;
            }
            else if(no < temp->data)    // Smaller
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                } 
                temp = temp -> lchild;
            }
            else if(no == temp->data)   // Identical
            {
                printf("Unable to insert as element is duplicate\n");
                free(newn);
                break;
            }
        }
    }
}

void Inorder(PNODE head)
{
    if(head != NULL)
    {
        Inorder(head->lchild);
        printf("%d\n",head->data);
        Inorder(head->rchild);
    }
}

void Preorder(PNODE head)
{
    if(head != NULL)
    {
        printf("%d\n",head->data);
        Preorder(head->lchild);
        Preorder(head->rchild);
    }
}

void Postorder(PNODE head)
{
    if(head != NULL)
    {
        Postorder(head->lchild);
        Postorder(head->rchild);
        printf("%d\n",head->data);
    }
}

bool Search(PNODE head, int no)
{
    bool bFlag = false;

    while(head != NULL)
    {
        if(no == head -> data)
        {
            bFlag = true;
            break;
        }
        else if(no > head->data)
        {
            head = head -> rchild;
        }
        else if(no < head->data)
        {
            head = head->lchild;
        }
    }
    return bFlag;
}

int CountNodes(PNODE head)
{
    static int iCount = 0;

    if(head != NULL)
    {
        iCount++;
        CountNodes(head->lchild);
        CountNodes(head->rchild);
    }
    return iCount;
}

int CountParentNodes(PNODE head)
{
    static int iCount = 0;

    if(head != NULL)
    {
        if((head->lchild != NULL) || (head->rchild != NULL))
        {
            iCount++;
        }
        CountParentNodes(head->lchild);
        CountParentNodes(head->rchild);
    }
    return iCount;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    Insert(&first,21);
    Insert(&first,11);
    Insert(&first,51);
    Insert(&first,9);
    Insert(&first,18);
    Insert(&first,35);
    Insert(&first,75);

    iRet = CountNodes(first);
    printf("Number of nodes are : %d\n",iRet);

    iRet = CountParentNodes(first);
    printf("Number of parent nodes are : %d\n",iRet);

    return 0;
}