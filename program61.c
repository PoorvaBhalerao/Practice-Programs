// Accept number from user and display count of digits which are greater than 5.

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10; 
        if(iDigit > 5)
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

    iRet = Count(iValue);

    printf("Count of digits greter than 5 are :%d",iRet);
    return 0;
}