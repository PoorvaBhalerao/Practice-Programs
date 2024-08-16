//Singly Linear Linked List implementation using java
//InsertFirst, Display

class node
{
    public int data;
    public node next;       // it is reference when you create object of a class
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

        newn = new node();

        newn.data = No;
        newn.next = null;

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

    public void Display()
    {
        System.out.println("Elements of Linked List are:\n");

        node temp = null;
        temp = First;

        while(temp!=null)
        {
            System.out.print("| "+temp.data+" | -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }
}

class program406
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(101);
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
    }
}