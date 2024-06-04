//write a program to return Addition of factors of number

import java.util.*;

class program206
{
    public static int SumFactor(int iNo)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;
        
        System.out.println("Enter a number: ");
        iValue = sobj.nextInt();

        iRet = SumFactor(iValue);

        System.out.println("Summation of Factors is: "+iRet);
    }
}