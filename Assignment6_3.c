//Write a program to find factorial of given number
//Input: 5
//Output: 120   (5*4*3*2*1)
//Input: -5
//Output: 120   (5*4*3*2*1)
#include<stdio.h>
int Factorial(int iNo)
{   
    int i = 0, iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i<=iNo; i++)
    {
        iFact = iFact * i;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("The factorial of %d is %d",iValue,iRet);

    return 0;
}
