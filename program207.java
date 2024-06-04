//Accept no from user and return difference betweeen Summation of factors and summation of non factors


import java.util.*;

class program207
{
    public static int Difference(int iNo)
    {
        int iCnt = 0, iSumf = 0, iSumN = 0;

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)   //Factors
            {
                iSumf = iSumf + iCnt;
            }
            else                    //Non Factors
            {
                iSumN = iSumN + iCnt;
            }
        }
        return iSumN - iSumf;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;
        
        System.out.println("Enter a number: ");
        iValue = sobj.nextInt();

        iRet = Difference(iValue);

        System.out.println("Difference between Summation of non Factors and factors is: "+iRet);
    }
}