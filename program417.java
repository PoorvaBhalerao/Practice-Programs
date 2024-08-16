//Doubly Circular Linked List implementation using java
//Constructor, Count, InsertFirst, InsertLast


class node
{
    public int data;
    public node next;
    public node prev;       

    public node(int Value)
    {
        data = Value;
        next = null;
        prev = null;
    }
}

class DoublyCL
{
    public node First;
    public node Last;
    public int iCount;

    public DoublyCL()
    {
        System.out.println("Object of DoublyCL get created successfully.");
        First = null;
        Last = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node(No);

        if(First == null && Last == null)
        {
            First = newn;
            Last = newn;
            // Last.next = First;
            // First.prev = Last;
        }
        else
        {
            newn.next = First;
            First.prev = newn;
            First = newn;
            // Last.next = First;
            // First.prev = Last;
        }
        Last.next = First;
        First.prev = Last;

        iCount++;
    }

    public void InsertLast(int No)
    {        
        node newn = null;

        newn = new node(No);

        if(First == null && Last == null)
        {
            First = newn;
            Last = newn;
            // Last.next = First;
            // First.prev = Last;
        }
        else
        {
            Last.next = newn;
            newn.prev = Last;
            Last = newn;
            // Last.next = First;
            // First.prev = Last;
        }
        Last.next = First;
        First.prev = Last;

        iCount++;
    }

    public void Display()
    {        
    }

    public int Count()
    {        
        return iCount;
    }

    public void DeleteFirst()
    {        
    }

    public void DeleteLast()
    {
    }

    public void InsertAtPos(int No, int iPos)
    {        
    }

    public void DeleteAtPos(int iPos)
    {        
    }
}

class program417
{
    public static void main(String Arg[])
    {
        DoublyCL obj = new DoublyCL();

        
    }
}