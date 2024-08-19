//Stack(LIFO)
//Constructor creation, Count, Display, Push(InsertFirst), Pop(DeleteFirst)


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

class Stack
{
    public node First;
    public int iCount;

    public Stack()
    {
        System.out.println("Object of Stack get created successfully.");
        First = null;
        iCount = 0;
    }

    public void Display()
    {
        System.out.println("Elements in stack are: ");

        node temp = null;
        temp = First;

        while(temp != null)
        {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public int Count()
    {        
        return iCount;
    }

    public void Push(int No)
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
            First = newn;
        }
        iCount++;
    }

    public int Pop()
    {
        int ivalue = 0;

        if(First == null)
        {
            System.out.println("Stack is empty");
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

class program422
{
    public static void main(String Arg[])
    {
        Stack obj = new Stack();
        int iRet = 0, iRet1 = 0;

        obj.Push(10);
        obj.Push(20);
        obj.Push(30);
        obj.Push(40);
        obj.Push(50);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);
        
        iRet1 = obj.Pop();
        System.out.println("Poped element is: "+iRet1);

        iRet1 = obj.Pop();
        System.out.println("Poped element is: "+iRet1);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are: "+iRet);

    }
}