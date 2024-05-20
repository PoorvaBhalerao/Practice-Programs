// Write a program which accept range from user and return addittion of all numbers in between that range(Range should contains positive numbers only)
//Input: 23 30
//Output: 212
//Input: -10    2
//Output:   Invalid range
#include<stdio.h>
int RangeSum(int iStart, int iEnd)
{
    int i = 0, iSum = 0;
    if(iStart < 0 || iEnd < 0 || iStart>iEnd)
    {
        printf("Invalid Input\n");
        return 0;
    }
    for(i = iStart; i<=iEnd; i++)
    {
        iSum = iSum + i;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Sum of all numbers between above range is: %d",iRet);
    return 0;
}