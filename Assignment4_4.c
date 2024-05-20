// Write a program which accept number and return summation of all the non factors
//Input: 12
//Output: 50
//Input: 10
//Output: 37
#include<stdio.h>

int SumNonFact(int iNo)
{
    int i = 1,iFact = 0;
    for(i = 1; i<iNo; i++)
    {
        if((iNo % i) != 0)
        {
            iFact = iFact + i;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of all non factors of %d is %d",iValue,iRet);

    return 0;
}