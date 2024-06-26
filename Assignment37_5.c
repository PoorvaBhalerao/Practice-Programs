//Accept number from user and Write a program which 
//checks whether first and last bit is ON or OFF.
//if one of the bits is OFF then return OFF.

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    unsigned int iMask =0x80000001;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter a number: ");
    scanf("%u",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("1st and last digit(32nd digit) are ON");
    }
    else
    {
        printf("Either of bits ot both bits are OFF");
    }

    return 0;
}
