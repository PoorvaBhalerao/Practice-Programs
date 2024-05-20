//Writte a program which returns difference between even factorial and odd factorial of number
//Input:    5
//Output:   -7  (8-15)
//Input:    -5
//Output:   -7  (8-15)
//Input:    10
//Output:    2895   (3840-945)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 1,iEveFact = 1, iOddFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(i = 1; i<=iNo; i++)
    {
        if((i % 2) == 0)
        {
            iEveFact = iEveFact * i;
        }
        else
        {
            iOddFact = iOddFact * i;
        }
    }
    return iEveFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet =FactorialDiff(iValue);

    printf("Difference between Even Factorial and Odd Factorial of %d is %d",iValue,iRet);
    
    return 0;
}
