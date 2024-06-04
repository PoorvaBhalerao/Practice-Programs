// Accept no from user and return addition of odd digits.

import java.util.*;

class program210
{
    public static int SumOddDigits(int iNo)
    {
        int iDigit = 0;
        int iSum =  0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) != 0)
            {
                iSum = iSum + iDigit;
            }
            iNo = iNo /10;
        }
        return iSum;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;
        
        System.out.println("Enter a number: ");
        iValue = sobj.nextInt();

        iRet = SumOddDigits(iValue);

        System.out.println("Sum of Odd of digits are: "+iRet);
    }
} 