// Write a program which accepts number from uaser and return count of digits in between 3 and 7(Excluding 3 and 7).
// Input: 2395
// Output: 1
// Input: 1018
// Output: 3
#include<stdio.h>
int Count(int iNo)
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
        if(iDigit > 3 && iDigit < 7)
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

    iRet = Count(iValue);

    printf("Count of digits in between 3 and 7 are: %d", iRet);

    return 0;
}