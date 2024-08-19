//Doubly Linear Linked List
//Insertfirst, InsertLast, InsertAt Pos, Display, Count, DeleteFirst, DeleteLast, DeleteatPos

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

class DoublyLL
{
    public node First;
    public int iCount;

    public DoublyLL()
    {
        System.out.println("Object of DoublyLL is created successfully");
        First = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;
        newn = new node(No);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First.prev = newn;
            First = newn;
        }
        iCount++;
    }

    public void InsertLast(int No)
    {
        node newn = null;
        node temp = null;
        newn = new node(No);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            temp = First;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;
            
        }
        iCount++;
    }

    public void Display()
    {
        node temp = null;

        temp = First;
        System.out.print("null <=>");
        while(temp != null)
        {
            System.out.print(" | "+temp.data+" | <=>");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        node temp = null;
        int iCnt = 0;

        temp = First;        
        while(temp != null)
        {
            iCnt++;
            temp = temp.next;
        }
        System.out.println();
        return iCnt;
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
            for(i= 1; i<iPos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            newn.prev = temp;
            temp.next.prev = newn;
            temp.next = newn;

            iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(First == null)
        {
            System.out.println("Unable to delete as LL is empty");
            return;
        }
        else if((First.next == null) && (First.prev == null))
        {
            First = null;
        }
        else
        {
            First = First.next;
            First.prev = null;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if(First == null)
        {
            System.out.println("Unable to delete as LL is empty");
            return;
        }
        else if((First.next == null) && (First.prev == null))
        {
            First = null;
        }
        else
        {
            node temp = null;
            temp = First;
            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
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
            for(i= 1; i<iPos-1; i++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            temp.next.prev = temp;
            
            iCount--;
        }
    }
}

class program425
{
    public static void main(String[] args) 
    {
        DoublyLL obj = new DoublyLL();

        obj.InsertFirst(500);
        obj.InsertFirst(450);
        obj.InsertFirst(400);
        obj.InsertFirst(350);

        obj.Display();
        int iRet = obj.Count();
        System.out.println("Number of elements in LL are: "+iRet);

        obj.InsertLast(200);
        obj.InsertLast(150);
        obj.InsertLast(100);
        obj.InsertLast(50);
        obj.InsertLast(25);

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

