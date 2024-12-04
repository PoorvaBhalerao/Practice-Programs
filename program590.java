//Accpet string from user and count number of words from user.
//not good code... only trim function added
//Input: India is my Country.
//output: 4
import java.util.*;

class program590
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sobj.nextLine();

        str = str.trim();   // it trims Initial white spaces only

        char Arr[] = str.toCharArray();
        int iCnt = 0, i = 0;

        for(i = 0; i< Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                iCnt++;
            }
        }
        System.out.println("Number of words are: "+(iCnt+1));
    }
}