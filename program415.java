//Singly Linear Linked List implementation using java
//InsertFirst, Display, InsertLast, count, DeleteFirst, DeleteLast
// defining constructor of node class
//Insert At Positiion, Delete At Position

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

class SinglyLL
{
    public node First;
    public int iCount;

    public SinglyLL()
    {
        System.out.println("Object of SinglyLL gets created successfully\n");
        First = null;           // 'null' is keyword in java so it is in small letters
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node(No);

        // newn.data = No;      // No need of these statements because we define constructor of class node
        // newn.next = null;

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
        iCount++;
    }

    public void InsertLast(int No)
    {
        node newn = null;

        newn = new node(No);

        // newn.data = No;
        // newn.next = null;

        if(First == null)
        {
            First = newn;
        }
        else
        {
            node temp = null;
            temp = First;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }

    public void Display()
    {
        System.out.println("Elements of Linked List are: ");

        node temp = null;
        temp = First;

        while(temp!=null)
        {
            System.out.print("| "+temp.data+" | -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
        if(First == null)
        {
            System.out.println("Unable to delete as LL is empty");
            return;
        }
        else if(First.next == null) //single node
        {
            First = null;
        }
        else    //more than one node
        {
            First = First.next;
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
        else if(First.next == null) //single node
        {
            First = null;
        }
        else        //more than one node
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

    public void InsertAtPos(int No, int iPos)
    {
        int iLength = 0, i = 0;
        iLength = iCount;
        if((iPos < 1) || (iPos > iLength+1))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == iLength+1)
        {
            InsertLast(No);
        }
        else 
        {
            node newn = null;
            newn = new node(No);

            node temp = null;
            temp = First;
            for(i = 1; i<iPos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;

            iCount++;
        }
    }

    public void DeleteAtPos(int iPos)
    {
        int iLength = 0, i = 0;
        iLength = iCount;
        if((iPos < 1) || (iPos > iLength))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iLength)
        {
            DeleteLast();
        }
        else 
        {
            node temp = null;
            temp = First;
            for(i = 1; i<iPos-1; i++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;

            iCount--;
        }
    }
}

class program415
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();
        int iRet = 0;

        obj.InsertFirst(101);
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);

        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);

        obj.DeleteFirst();

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);

        obj.DeleteLast();

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);

        obj.InsertAtPos(105,4);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);

        obj.DeleteAtPos(4);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);
    }
}