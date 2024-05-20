//Write a program to find odd Factorial of given number.
// Input: 5
// Output: 15   (5*3*1)
// Input: -5
// Output: 15   (5*3*1)
// Input: 10
// Output: 945   (9*7*5*3*1)

#include<stdio.h>

int OddFactorial(int iNo)
{
    int i = 1,iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(i = 1; i<=iNo; i++)
    {
        if((i % 2) != 0)
        {
            iFact = iFact * i;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet =OddFactorial(iValue);

    printf("Value of odd factorial of %d is %d",iValue,iRet);
    
    return 0;
}
