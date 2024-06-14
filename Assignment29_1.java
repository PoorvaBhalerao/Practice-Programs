// Write a program which accept string from user and copy characters of first string to another empty string in reverse order.
//Input: Poorva
//Output: avrooP
import java.util.*;

class Assignment29_1
{
    public static String ReversedString(String FirstStr)
    {
        int i = 0;
        char Arr[] = FirstStr.toCharArray();
        
        StringBuilder SecondStr = new StringBuilder();
       
        for(i =FirstStr.length()-1 ; i>=0; i--)
        {
            SecondStr.append(FirstStr.charAt(i));
        }
        return SecondStr.toString();
    }

    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String: ");
        String First = sobj.nextLine();

        String Second = ReversedString(First);

        System.out.println("Reversed String is: "+Second);
    }
}
