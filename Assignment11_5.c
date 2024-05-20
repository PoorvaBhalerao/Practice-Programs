// Write a program which accepts number from user and return difference between summation of even digits and summation of odd digits
//Input:    2395
//Output:   -15 (2-17)
//Input:    1018
//output:   6   (8-2)
#include<stdio.h>
int SumDiff(int iNo)
{
    int iDigit = 0;
    int iSumeven = 0, iSumodd = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit %2 == 0)
        {
            iSumeven = iSumeven + iDigit;
        }
        else
        {
            iSumodd = iSumodd + iDigit;
        }
        iNo = iNo / 10;
    }
    return (iSumeven-iSumodd);
}

int main()
{
    int iValue = 0, iRet  = 0;
    
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = SumDiff(iValue);

    printf("Difference between summation of even digits and summation of odd digitsis: %d", iRet);

    return 0;
}