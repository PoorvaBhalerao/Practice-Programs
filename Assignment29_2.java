// Write a program which accept string from user and copy characters of first string to another empty string removing all white spaces.
//Input: India is my country.
//Output: IndiaismyCountry.
import java.util.*;

class Assignment29_2
{
    public static String CopyString(String FirstStr)
    {
        int i = 0;
        char Arr[] = FirstStr.toCharArray();

        StringBuilder SecondStr = new StringBuilder();

        for(i =0; i< Arr.length ; i++)
        {
            if(Arr[i] != ' ')
            {
                SecondStr.append(FirstStr.charAt(i));
            }
        }
        return SecondStr.toString();
    }

    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String: ");
        String First = sobj.nextLine();

        String Second = CopyString(First);

        System.out.println("Second String without white spaces: "+Second);
    }
}