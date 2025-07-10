#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class DoublyCL
{
    public:
        struct node<T> * head;
        struct node<T> * tail;
        int iCount;

        DoublyCL();
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
DoublyCL<T>::DoublyCL()
{
    tail = NULL;
    head = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL<T>::InsertFirst(T no)
{
    struct node<T> * newn = NULL;

    newn = new node<T>;    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*head == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        newn->next = *head;
        (*head) -> prev = newn;

        *head = newn;
    }
    (*tail)->next = *head;
    (*head)->prev = *tail;
}

template <class T>
void DoublyCL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

    newn = new node<T>;   
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*head == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        (*tail)->next = newn;
        newn->prev = *tail;

        *tail = newn;
    }
    (*tail)->next = *head;
    (*head)->prev = *tail;
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if(*head == NULL && *tail == NULL)
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
        *head = (*head) ->next;
        free((*tail)->next);

        (*tail)->next = *head;
        (*head) -> prev = *tail;
    }
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
   if(*head == NULL && *tail == NULL)
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
        *tail = (*tail) -> prev;
        free((*tail)->next);

        (*tail)->next = *head;
        (*head)->prev = *tail;
    }
}
template <class T>
void DoublyCL<T>::InsertAtPos(T no , int ipos)
{
    int i = 0;
    int iCount = 0;

    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

     iCount = Count(*head, *tail);

    if((ipos < 1) || (ipos > iCount + 1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(head,tail,no);
    }
    else if(ipos == iCount + 1)
    {
        InsertLast(head,tail,no);
    }
    else
    {
        newn = new node<T>;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *head;

        for(i = 1; i< ipos -1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
    }
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int ipos)
{
    int i = 0;
    int iCount = 0;

    struct node<T> * temp = NULL;
    
    iCount = Count(*head , *tail);

    if((ipos < 1) || (ipos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(head,tail);
    }
    else if(ipos == iCount)
    {
        DeleteLast(head,tail);
    }
    else
    {
        temp = *head;

        for(i = 1; i< ipos -1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    
    }
}

template <class T>
void DoublyCL<T>::Display()
{
    if(head == NULL && tail == NULL)
    {
        cout<<"Linkedlist is empty\n";
        return;
    }
    do
    {
        cout<<"| %d | <=> "<<head->data<<"\n";
        head = head -> next;
    }while(head != tail->next);

    
}

template <class T>
int DoublyCL<T>::Count()
{
     int iCount = 0;

    if(head == NULL && tail == NULL)
    {
        return 0;
    }

    do
    {
        iCount++;
        head = head -> next;
    }while(head != tail->next);

    return iCount;
}

int main()
{
    DoublyCL<int>sobj;
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