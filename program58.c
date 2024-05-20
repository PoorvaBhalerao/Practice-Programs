// Accept number from user and display count of even digits from number.
#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0, iCount = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10; 
        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Count of even digits from number is:%d",iRet);
    return 0;
}