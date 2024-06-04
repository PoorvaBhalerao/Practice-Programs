// Accept no from user and return difference between summation of even digits and odd digits.

import java.util.*;

class program212
{
    public static int SumDifference(int iNo)
    {
        int iSumE = 0, iSumO = 0, iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2)== 0)
            {
                iSumE = iSumE + iDigit;
            }
            else
            {
                iSumO = iSumO + iDigit;
            }
            iNo = iNo /10;
        }
        return iSumE-iSumO;
        
    }


    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter a number: ");
        iValue = sobj.nextInt();
        
        iRet = SumDifference(iValue);

        System.out.println("Difference between summation of even and odd digits is: "+iRet);

    }


}

