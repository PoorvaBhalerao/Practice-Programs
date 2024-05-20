// Write a program which accepts number from uaser and return count of odd digits.
// Input: 2395
// Output: 3
// Input: 1018
// Output: 2
#include<stdio.h>
int CountOddDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit %2 != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet  = 0;
    
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = CountOddDigit(iValue);

    printf("Count of odd digits in number is: %d", iRet);

    return 0;
}