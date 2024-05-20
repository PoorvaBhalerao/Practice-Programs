//Accept amount in US dollar and return its corresponding value in Indian currency.
// Consider 1$ as 70 rupees.
// Input: 10
// Output: 700

#include<stdio.h>

int DollatToINR(int iNo)
{   
    int INR = 0;
    INR = 70*iNo;
    return INR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet =DollatToINR(iValue);

    printf("Value in INR of %d is %d",iValue,iRet);
    
    return 0;
}