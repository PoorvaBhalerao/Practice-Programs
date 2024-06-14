// Write a program which accept string from user and 
//copy characters of first string to another empty string converting all capital characters to small case.
//Input: INDIA is my Country.
//Output: india is my country.

import java.util.*;

class Assignment29_4
{
    public static void StrToSmall(String FirstStr)
    {
        int i = 0;

        StringBuilder SecondStr = new StringBuilder();

        for(i = 0; i<FirstStr.length(); i++)
        {
            char currentchar = FirstStr.charAt(i);
            if(Character.isUpperCase(currentchar))
            {
                SecondStr.append(Character.toLowerCase(currentchar));
            }
            else
            {
                SecondStr.append(currentchar);
            }
        }
        System.out.println("Second string is: "+SecondStr);
    }
    
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String: ");
        String First = sobj.nextLine();

        StrToSmall(First);
    }
}
