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

class DoublyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

        DoublyCL()
        {
            head = NULL;
            tail = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn=NULL;
            newn=new NODE;
            newn->data=no;
            newn->next=NULL;
            newn->prev=NULL;

            if(head==NULL && tail==NULL)
            {
                head=newn;
                tail=newn;
            }
            else
            {
                newn->next=head;
                head->prev=newn;
                head=newn;
            }
            tail->next=head;
            head->prev=tail;

            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE newn=NULL;
            newn=new NODE;
            newn->data=no;
            newn->next=NULL;
            newn->prev=NULL;

            if(head==NULL && tail==NULL)
            {
                head=newn;
                tail=newn;
            }
            else
            {
                tail->next=newn;
                newn->prev=tail;
                tail=newn;
            }
            tail->next=head;
            head->prev=tail;

            iCount++;
        }

        void InsertAtPos(int no, int ipos)
        {
            PNODE newn=NULL;
            PNODE temp=NULL;

            int i=0;

            if(ipos<1 || ipos>iCount+1)
            {
                cout<<"invaild position\n";
                return;
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
                temp->next->prev=newn;
                temp->next=newn;
                newn->prev=temp;
                
                tail->next=head;
                head->prev=tail;

                iCount++;
            }
        }
        
        void DeleteFirst()
        {
            if(head==NULL && tail==NULL)
            {
                return;
            }
            else if(head==tail)
            {
                delete head;
                head=NULL;
                tail=NULL;
            }
            else
            {
                head=head->next;
                delete tail->next;

                tail->next=head;
                head->prev=tail;
            }
            iCount--;
        }
        void DeleteLast()
        {
            if(head==NULL && tail==NULL)
            {
                return;
            }
            else if(head==tail)
            {
                delete head;
                head=NULL;
                tail=NULL;
            }
            else
            {
               tail=tail->prev;
               delete tail->next;

                tail->next=head;
                head->prev=tail;
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
                cout<<"invaild position\n";
                return;
            }
            if(ipos==1)
            {
                DeleteFirst();
            }
            else if(ipos==iCount+1)
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
                
                tail->next=head;
                head->prev=tail;

                iCount--;
            }
        }

        void Display()
        {
            PNODE temp=head;
            if(head==NULL && tail==NULL)
            {
                cout<<"linklist is empty\n";
                return;
            }
            cout<<"elements of linklist are\n";
            do
            {
                cout<<" | "<<temp->data<<" | -> ";
                temp=temp->next;
            } while (temp!=head);
            cout<<"NULL\n";
        }
        int Count()
        {
            return iCount;
        }
};

int main()
{
    DoublyCL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    
    obj.InsertAtPos(75,4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteAtPos(4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();
    
    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";
    
    return 0;
}