#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE;

class Stack
{
    public:
        PNODE head;
        int iCount;

        Stack()
        {
            head = NULL;
            iCount = 0;
        }

        void push(int no)
        {}

        int pop()
        {}

        void Disply()
        {}

        int iCount()
        {
            return iCount;
        }
};

int main()
{

    return 0;
}