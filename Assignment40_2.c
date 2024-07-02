// Write a program which accept one number and position from user and 
//OFF that bit at that position.
//Return modified number.
//Input:    10
//        pos:    1
//Output: 8

#include<stdio.h>

void OFFbit(int iNo, int ipos)
{
    unsigned int iMask = 0;
    unsigned int iResult = 0;
    
    if((ipos < 1) || (ipos > 31))
    {
        printf("Invalid position entered\n");
        return;
    }

    iMask = ~(1 << ipos);
    iResult = iNo & iMask;
    
    printf("Modified number is: %u", iResult);
}

int main()
{
    unsigned int iValue = 0;
    int iposition = 0;

    printf("Enter number: ");
    scanf("%u",&iValue);

    printf("Enter position of bit between(0-31): ");
    scanf("%d",&iposition);

    OFFbit(iValue, iposition);

    return 0;
}