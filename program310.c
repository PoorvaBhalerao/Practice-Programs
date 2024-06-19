//Accept number from user and convert it into binary and count of 1 in binary number and return count.

#include<stdio.h>

int CountOne(int iNo)
{
    int iDigit = 0, iSum = 0;
    //int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        // if(iDigit == 1)
        // {
        //     iCount++;
        // }      
        iSum = iSum + iDigit; 
        iNo = iNo / 2;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = CountOne(iValue);

    printf("Count of 1 in given numbers binary format is: %d", iRet);

    return 0;
}