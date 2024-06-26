//Accept number from user and Write a program which 
//checks whether 7th, 8th and 9th bit is ON or OFF.
//if one of the bits is OFF then return OFF.

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    unsigned int iMask =0x000001c0;
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
        printf("7th, 8th and 9th bits are ON");
    }
    else
    {
        printf("bits are OFF");
    }

    return 0;
}
