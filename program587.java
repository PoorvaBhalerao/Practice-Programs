//Accpet string from user and count number of white spaces in it.

import java.util.*;

class program587
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int iCnt = 0, i = 0;

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                iCnt++;
            }
        }
        System.out.println("Number of white spaces are: "+iCnt);
    }
}