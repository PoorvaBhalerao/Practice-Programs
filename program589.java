//Accpet string from user and count number of words from user.
//POOR code(not good code)
//Input: India is my Country.
//output: 4
import java.util.*;

class program589
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        int iCnt = 0, i = 0;

        for(i = 0; i< str.length(); i++)
        {
            if(Arr[i] == ' ')
            {
                iCnt++;
            }
        }
        System.out.println("Number of words are: "+(iCnt+1));
    }
}