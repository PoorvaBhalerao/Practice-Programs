//Accept String from user and travel the string and display count of capital characters in string

import java.util.*;

class program260
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your name: ");
        String name = sobj.nextLine();

        int i = 0, iCnt = 0;
        char ch;

        for(i = 0; i<name.length(); i++)
        {
            ch = name.charAt(i);

            if((ch >= 'A') && (ch <='Z'))
            {
                iCnt++;
            }
        }

        System.out.println("Count of Capital characters are: "+iCnt);
    }
}