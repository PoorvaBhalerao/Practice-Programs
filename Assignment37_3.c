//Accept number from user and Write a program which 
//checks whether 7th, 15th, 21st, 28th bit is ON or OFF.
//if one of the bits is OFF then return OFF.

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    unsigned int iMask =0x08104040;
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("7th, 15th, 21st, 28th bits is ON");
    }
    else
    {
        printf("bits are OFF");
    }

    return 0;
}
