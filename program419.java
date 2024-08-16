//Doubly Circular Linked List implementation using java
//Constructor, Count, InsertFirst, InsertLast, Display, DeleteFirst, DeleteLast


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
        if(First == null && Last == null)
        {
            System.out.println("LL is empty");
            return;
        }  

        System.out.println("Elements of DoublyCL are: ");
        System.out.print(" <=> ");
        do
        {
            System.out.print(" | "+First.data+" | <=> ");
            First = First.next;
        }while(First != Last.next);

        System.out.println();
    }

    public int Count()
    {        
        return iCount;
    }

    public void DeleteFirst()
    {        
        if(First == null && Last == null)
        {
            System.out.println("Unable to delete as LL is empty");
            return;
        }
        else if(First == Last)
        {
            First = null;
            Last = null;
        }
        else 
        {
            First = First.next;
            First.prev = Last;
            Last.next = First;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if(First == null && Last == null)
        {
            System.out.println("Unable to delete as LL is empty");
            return;
        }
        else if(First == Last)
        {
            First = null;
            Last = null;
        }
        else 
        {
            Last = Last.prev;
            First.prev = Last;
            Last.next = First;
        }
        iCount--;
    }

    public void InsertAtPos(int No, int iPos)
    {        
    }

    public void DeleteAtPos(int iPos)
    {        
    }
}

class program419
{
    public static void main(String Arg[])
    {
        DoublyCL obj = new DoublyCL();
        int iRet = 0;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements of LL are: "+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements of LL are: "+iRet);    
        
        obj.DeleteFirst();

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements of LL are: "+iRet);    
        
        obj.DeleteLast();

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements of LL are: "+iRet);    
        


    }
}