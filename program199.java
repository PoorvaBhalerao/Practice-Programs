// Addition of two numbers
//Approach 2
import java.util.*;     //This package contains Scanner class

class program199
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;
        int iAns = 0;
        
        System.out.println("Enter First Number: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Second Number: ");
        iValue2 = sobj.nextInt();
        
        iAns = iValue1 + iValue2;
        
        System.out.println("Addition is: "+iAns);

    }
}
