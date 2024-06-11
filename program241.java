//Accept array and  display elements...dynamic mem allocation
// OOP
//Step 2

import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int no)
    {
        Arr = new int[no];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements: ");
        int i = 0;

        for(i = 0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the array are: ");
        int i = 0;

        for(i = 0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }

    }
}


class program241
{
    public static void main(String Arg[])
    {
        ArrayX aobj= new ArrayX(5);

        System.out.println("Array size is :"+aobj.Arr.length);

        aobj.Accept();
        aobj.Display();
    }
}