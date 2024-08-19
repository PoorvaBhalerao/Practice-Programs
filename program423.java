//Queue(FIFO)
//EnQueue, DeQueue, Display, Count


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

class Queue
{
    public node First;
    public int iCount;

    public Queue()
    {
        System.out.println("Object of Queue get created successfully.");
        First = null;
        iCount = 0;
    }

    public void Display()
    {
        System.out.println("Elements in Queue are: ");

        node temp = null;
        temp = First;

        while(temp != null)
        {
            System.out.print(temp.data+"\t");
            temp = temp.next;
        }
        System.out.println();
    }

    public int Count()
    {        
        return iCount;
    }

    public void EnQueue(int No)
    {
        node newn = null;

        newn = new node(No);

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

    public int DeQueue()
    {
        int ivalue = 0;

        if(First == null)
        {
            System.out.println("Queue is empty");
            return -1;
        }
        else
        {
            ivalue = First.data;
            First = First.next;

            
        }
        iCount--;     
        return ivalue;   
    }    
}

class program423
{
    public static void main(String Arg[])
    {
        Queue obj = new Queue();
        int iRet = 0, iRet1 = 0;

        obj.EnQueue(10);
        obj.EnQueue(20);
        obj.EnQueue(30);
        obj.EnQueue(40);
        obj.EnQueue(50);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);
        
        iRet1 = obj.DeQueue();
        System.out.println("Removed element is: "+iRet1);

        iRet1 = obj.DeQueue();
        System.out.println("Removed element is: "+iRet1);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);

    }
}