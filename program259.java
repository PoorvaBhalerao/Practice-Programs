//Accept String from user and travel the string(display each character seperately)

import java.util.*;

class program259
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your name: ");
        String name = sobj.nextLine();

        int i = 0;

        for(i = 0; i<name.length(); i++)
        {
            System.out.println(name.charAt(i));
        }
    }
}