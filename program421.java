//Stack
//Constructor creation, Count


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
    {}

    public int Count()
    {        
        return iCount;
    }

    public void Push(int No)
    {}

    public int Pop()
    {
        return 0;
    }    
}

class program421
{
    public static void main(String Arg[])
    {
        Stack obj = new Stack();


    }
}