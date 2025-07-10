#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoublyLL
{
    public:
        struct node<T> * head;
        int iCount;

        DoublyLL();
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
DoublyLL<T>::DoublyLL()
{
    head = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL<T>::InsertFirst(T no)
{
    struct node<T> * newn = NULL;

    newn = new node<T>;    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        (*head)->prev = newn;
        *head = newn;
    }
}

template <class T>
void DoublyLL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

    newn = new node<T>;   
     newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
   if(*head == NULL)   // case1 
    {
        return;
    }
    else if((*head)->next == NULL)  // case2
    {
        free(*head);
        *head = NULL;
    }
    else    // case3
    {
        *head = (*head) -> next;
        free((*head)->prev);        // $
        (*head)->prev = NULL;         // $
    }
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
   struct node<T> * temp = NULL;

    if(*head == NULL)   // case1 
    {
        return;
    }
    else if((*head)->next == NULL)  // case2
    {
        free(*head);
        *head = NULL;
    }
    else    // case3
    {
        temp = *head;

        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}
template <class T>
void DoublyLL<T>::InsertAtPos(T no , int ipos)
{
    int i = 0;
    int CountNode = 0;

    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

    CountNode = Count(*head);

    if((ipos < 1) || (ipos > CountNode + 1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(head,no);
    }
    else if(ipos == CountNode + 1)
    {
        InsertLast(head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *head;

        for(i = 1; i < ipos -1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;    // 1
        temp->next->prev = newn;    // 2    $
        temp->next = newn;          // 3
        newn->prev = temp;          // 4    $
    }
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int ipos)
{
    int i = 0;
    int CountNode = 0;

    struct node<T> * temp = NULL;
    struct node<T> * target = NULL;
    
    CountNode = Count(*head);

    if((ipos < 1) || (ipos > CountNode))
    {
        printf("Invalid Position\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(head);
    }
    else if(ipos == CountNode)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;

        for(i =1; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }

        target = temp->next;

        temp->next = target -> next;    //1
        temp->next->prev = temp;        // 2    $
        free(target);                     // 3
    }   
}

template <class T>
void DoublyLL<T>::Display()
{
   cout<<"Elements of the LinkedList are : \n";

    cout<<"NULL <=> ";
    while(head != NULL)
    {
        cout<<"| %d | <=> "<<head->data<<"\n";
        head = head->next;  
    }
    cout<<"NULL\n";

    
}

template <class T>
int DoublyLL<T>::Count()
{
    int iCount = 0;

    while(head != NULL)
    {
        iCount++;
        head = head -> next;
    }
    return iCount;
}

int main()
{
    DoublyLL<int>sobj;
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