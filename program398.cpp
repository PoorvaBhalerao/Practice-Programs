//Stack

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Stack
{
    private:
        PNODE First;
        int iCount;

    public:
         
        Stack();
        void Display();
        int Count();
        void Push(int No);  // Just like InsertFirst() from SLL
        int Pop();          // Just like DeleteFirst() from SLL
};

Stack::Stack()
{}

void Stack::Display()
{}

int Stack::Count()
{
    return iCount;
}

void Stack::Push(int No)
{}

int Stack::Pop()
{
    return 0;
}

int main()
{
    Stack obj;

    


    return 0;
}

