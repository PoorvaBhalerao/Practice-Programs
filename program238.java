//Accept array from user and Display length of array ..dynamic mem allocation
import java.util.*;

class program238
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements: ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Size of array is :"+Arr.length);
    }
}