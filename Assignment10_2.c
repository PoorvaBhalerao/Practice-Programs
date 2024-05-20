//Write s program which accept number from user and check whether it contains 0 in it or not.
//Input: 2395
//Output: there is no zero
//Input: 9000
//Output: It contains zero

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    BOOL b = FALSE;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            b = TRUE;
        }
        iNo = iNo / 10;
    }
    return b;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("Number contains Zero");
    }
    else
    {
        printf("Number not contains Zero");
    }

    return 0;
}