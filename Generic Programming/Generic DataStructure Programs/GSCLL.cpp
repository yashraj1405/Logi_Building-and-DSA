#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};


template <class T>
class SinglyCL
{
    public:
        struct node<T> * head;
        struct node<T> * tail;
        int iCount;

        SinglyCL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no , int ipos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
        void Display();
        int Count();
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::InsertFirst(T no)
{
    struct node<T> * newn = NULL;

    newn = new node<T>;    
    newn->data = no;
    newn->next = NULL;

     if((*head == NULL) && (*tail == NULL))    // LL is empty
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
    (*tail) -> next = *head;
}

template <class T>
void SinglyCL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

    newn = new node<T>;   
    newn->data = no;
    newn->next = NULL;

    if((*head == NULL) && (*tail == NULL))    // LL is empty
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        (*tail)->next = newn;
        *tail = newn;
    }
    (*tail) -> next = *head;
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    struct node<T> * temp = NULL;

    if((*head == NULL) && (*tail == NULL))
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        temp = *head;

        *head = (*head) -> next;
        free(temp);
        (*tail)->next = *head;
    }
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    struct node<T> * temp = NULL;

    if((*head == NULL) && (*tail == NULL))
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        temp = *head;

        while(temp->next != *tail)
        {
            temp = temp -> next;
        }

        free(temp->next);
        *tail = temp;
        (*tail)->next = *head;
    }
}
template <class T>
void SinglyCL<T>::InsertAtPos(T no , int ipos)
{
    int i = 0;
    int iCount = 0;

    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

     iCount = Count(*head, *tail);

    if(ipos < 1 || ipos > iCount+1)
    {
        printf("Invalid position \n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(head, tail, no);
    }
    else if(ipos == iCount+1)
    {
        InsertLast(head,tail,no);
    }
    else
    {
        newn = new node<T>;
        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int ipos)
{
    int i = 0;
    int iCount = 0;

    struct node<T> * temp = NULL;
    struct node<T> * target = NULL;

     iCount = Count(*head, *tail);

    if(ipos < 1 || ipos > iCount)
    {
        printf("Invalid position \n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(head, tail);
    }
    else if(ipos == iCount)
    {
        DeleteLast(head,tail);
    }
    else
    {
        temp = *head;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp -> next;
        }

        target = temp->next;

        temp->next = target->next;
        free(target);
    }
}

template <class T>
void SinglyCL<T>::Display()
{
    struct node<T> * temp = head;

    cout<<"Elements of circular LinkedList are : \n";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp -> next;
    }

    cout<<"NULL\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

int main()
{
    SinglyCL <int>sobj;
    int iRet = 0;

    sobj.InsertFirst(90);
    sobj.InsertFirst(76);
    sobj.InsertFirst(78);
    
    sobj.InsertLast(829);
    sobj.InsertLast(976);
    sobj.InsertLast(8723);

    sobj.InsertAtPos(98,4);

    sobj.Display();
    
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteAtPos(4);

    sobj.Display();
    
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}