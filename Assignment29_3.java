// Write a program which accept string from user and 
//copy characters of first string to another empty string converting all small characters to capital case.
//Input: India is my country.
//Output: INDIA IS MY COUNTRY.

import java.util.*;

class Assignment29_3
{
    public static void StrToCapital(String FirstStr)
    {
        int i = 0;

        StringBuilder SecondStr = new StringBuilder();

        for(i = 0; i<FirstStr.length(); i++)
        {
            char currentchar = FirstStr.charAt(i);
            if(Character.isLowerCase(currentchar))
            {
                SecondStr.append(Character.toUpperCase(currentchar));
            }
            else
            {
                SecondStr.append(currentchar);
            }
        }
        System.out.println("Second String is: "+SecondStr);
    }
    
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String: ");
        String First = sobj.nextLine();

        StrToCapital(First);
    }
}
