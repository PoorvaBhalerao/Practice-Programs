//Accept String from user and display length of string(length()) method is used)

import java.util.*;

class program258
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your name: ");
        String name = sobj.nextLine();

        System.out.println("String length is: "+name.length());
    }
}