//Singly Circular Linked List
//InsertFirst, InsertLast, Display, Count, DeleteFirst, DeleteLast, InsertAtPosition, DeleteAtPosition

class node
{
    public int data;
    public node next;

    public node(int Value)
    {
        data = Value;
        next = null;
    }
}

class SinglyCL
{
    public node First;
    public node Last;
    public int iCount;

    public SinglyCL()
    {
        //System.out.println("Object of SinglyCL is created successfully");
        First = null;
        Last = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;
        
        // newn = new node();
        // new.data = No;
        // new.next = null;
        newn = new node(No);    // this line is because we have already initiated data in constructor of node class
        
        if((First == null) && (Last == null))
        {
            First = newn;
            Last = newn;
            //Last.next = First;
        }
        else
        {
            newn.next = First;
            First = newn;
            //Last.next = First;
        }
        Last.next = First;
        iCount++;
    }

    public void InsertLast(int No)
    {
        node newn = null;

        newn = new node(No);    
        
        if((First == null) && (Last == null))
        {
            First = newn;
            Last = newn;
            //Last.next = First;
        }
        else
        {
            Last.next = newn;
            Last = newn;
            //Last.next = First;
        }
        Last.next = First;
        iCount++;
    }

    public void Display()
    {
        node temp = null;

        if(First == null && Last == null)
        {
            System.out.println("LL is empty!");
            return;
        }
        
        temp = First;
        System.out.print(" <=> ");
        do
        {
            System.out.print("| "+temp.data+" | <=> ");
            temp = temp.next;
        }while(temp != Last.next);

        System.out.println();
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertAtPos(int No, int iPos)
    {
        int i = 0;
        if((iPos < 1) || (iPos > iCount+1))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == iCount+1)
        {
            InsertLast(No);
        }
        else 
        {
            node newn = null;
            newn = new node(No);

            node temp = null;
            temp = First;
            for(i =1; i<iPos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;

            iCount++;
        }
    }

    public void DeleteFirst()
    {
        if((First == null) && (Last == null))
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
            Last.next = First;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if((First == null) && (Last == null))
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
            node temp = null;
            temp = First;
            while(temp.next.next != First)
            {
                temp = temp.next;
            }
            Last = temp;
            Last.next = First;
        }
        iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        int i = 0;
        if((iPos < 1) || (iPos > iCount))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else 
        {
            node temp = null;
            temp = First;
            for(i =1; i<iPos-1; i++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;

            iCount--;
        }
    }



}

class program424
{
    public static void main(String arg[]) 
    {
        SinglyCL obj = new SinglyCL();

        obj.InsertFirst(50);
        obj.InsertFirst(40);
        obj.InsertFirst(20);
        obj.InsertFirst(10);    
        obj.InsertFirst(5);

        obj.Display();
        int iRet = obj.Count();
        System.out.println("Number of elements in LL are: "+iRet);

        obj.InsertLast(100);
        obj.InsertLast(200);
        obj.InsertLast(300);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in LL are: "+iRet);

        obj.DeleteFirst();
        
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in LL are: "+iRet);

        obj.DeleteLast();
        
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in LL are: "+iRet);

        obj.InsertAtPos(105, 5);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in LL are: "+iRet);

        obj.DeleteAtPos(5);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in LL are: "+iRet);






    }
}