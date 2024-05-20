// Accept number from user and reverse that number and display reversed number.

#include<stdio.h>

int ReverseNum(int iNo)
{
    int iDigit = 0, iRev = 0;
    
    if(iNo < 0) // if this updator is not written here then below logic doesnt work
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = ReverseNum(iValue);

    printf("Reversed number is:%d",iRet);
    
    return 0;
}