//Accept two numbers from user as Value1 , Value2 and return Value1^Value2(power)
// using for loop
#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    int iMult = 1;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}


int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue1);

    printf("Enter second number: ");
    scanf("%d", &iValue2);

    iRet = Power(iValue1, iValue2);

    printf("Answer is: %d\n", iRet);

    return 0;
}