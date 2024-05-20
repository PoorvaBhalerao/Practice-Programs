//Write a program which accept number from user and return difference between
// summation of all its factors and non factors.
// Input: 12
// Output: -34 (16-50)
// Input: 10
// Output: -29 (8-37)
#include<stdio.h>

int FactDiff(int iNo)
{
    int i = 1,iFact = 0, iNonfact = 0;
    for(i = 1; i<iNo; i++)
    {
        if((iNo % i) == 0)
        {
            iFact = iFact + i;
        }
        else
        {
            iNonfact = iNonfact + i;
        }
    }
    return iFact - iNonfact;    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference of all factors and non factors of %d is %d",iValue,iRet);

    return 0;
}