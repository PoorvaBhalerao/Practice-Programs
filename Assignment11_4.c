// Write a program which accepts number from user and return multiplication of all digits of number
//Input: 2395
//Output: 270
//Input: 1018
//Output: 0
#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int Mult = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        Mult = Mult * iDigit;
        iNo = iNo / 10;
    }
    return Mult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of all digits of number is %d",iRet);

    return 0;
}