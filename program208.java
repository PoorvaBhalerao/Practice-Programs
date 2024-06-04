//Accept no from user and return count of digits from that number
import java.util.*;

class program208
{
    public static int CountDigits(int iNo)
    {
        //int iDigit = 0;
        int iCount =  0;
        while(iNo != 0)
        {
            //iDigit = iNo %10;.....it is not required
            iCount++;
            iNo = iNo /10;
        }
        return iCount;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;
        
        System.out.println("Enter a number: ");
        iValue = sobj.nextInt();

        iRet = CountDigits(iValue);

        System.out.println("No of digits are: "+iRet);
    }
}