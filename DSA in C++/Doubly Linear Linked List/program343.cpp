//DoublyLL 

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    public:
    PNODE head;
    int iCount;

    DoublyLL()
    {
        head=NULL;
        iCount=0;
    }
    void InsertFirst(int no)
    {
        PNODE newn=NULL;
        newn=new NODE;

        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;

        if(head==NULL)
        {
            head=newn;
        }
        else
        {
            newn->next=head;
            head->prev=newn;
            head=newn;
        }
        iCount++;
    }
    
    void InsertLast(int no)
    {
        PNODE newn=NULL;
        PNODE temp=NULL;

        newn=new NODE;
        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;

        if(head==NULL)
        {
            head=newn;
        }
        else
        {
            temp=head;

            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
            newn->prev=temp;
        }
        iCount++;
    }

    void InsertAtPos(int no, int ipos)
    {
        PNODE newn=NULL;
        PNODE temp=NULL;
        int i=0;

        if(ipos<1 || ipos>iCount+1)
        {
            cout<<"invalid position\n";
        }
        if(ipos==1)
        {
            InsertFirst(no);
        }
        else if(ipos==iCount+1)
        {
            InsertLast(no);
        }
        else
        {
            newn=new NODE;
            newn->data=no;
            newn->next=NULL;
            newn->prev=NULL;

            temp=head;

            for(i=1; i<ipos-1; i++)
            {
                temp=temp->next;
            }
            newn->next=temp->next;
            temp->next=newn;
            newn->prev=temp;

            iCount++;
        }
        
    }

    void Display()
    {
        PNODE temp=head;

        cout<<"elements of linklist are: \n";

        while(temp!=NULL)
        {
            cout<<" | "<<temp->data<<" | ->";
            temp=temp->next;
        }
        cout<<"NULL \n";
    }

    int Count()
    {
        return iCount;
    }

    void DeleteFirst()
    {
        PNODE temp=NULL;
        
        if(head==NULL)
        {
            return;
        }
        else if (head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        else
        {
            temp=head;

            head=head->next;
            head->prev=NULL;
            delete temp;
        }
        iCount--;
    }

    void DeleteLast()
    {
        PNODE temp=NULL;

        if(head==NULL)
        {
            return;
        }
        else if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        else
        {
            temp=head;

            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            delete temp->next;
            temp->next=NULL;
        }
        iCount--;
    }

    void DeleteAtPos(int ipos)
    {
        PNODE temp=NULL;
        PNODE target=NULL;
        int i=0;

        if(ipos<1 || ipos>iCount)
        {
            cout<<"invalid position\n";
            return;
        }
        if(ipos==1)
        {
            DeleteFirst();
        }
        else if(ipos==iCount)
        {
            DeleteLast();
        }
        else
        {
            temp=head;

            for(i=1; i<ipos-1; i++)
            {
                temp=temp->next;
            }
            target=temp->next;
            temp->next=target->next;
            target->next->prev=temp;
            delete target;

            iCount--;
        }
    }
};

int main()
{
    DoublyLL dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    
    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);
    
    dobj.InsertAtPos(75,4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.DeleteFirst();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.DeleteLast();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.DeleteAtPos(4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}

