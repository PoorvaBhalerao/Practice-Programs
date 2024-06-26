//Accept number from user and Write a program which 
//checks whether 5th and 18th bit is ON or OFF.
//if one of the bits is OFF then return OFF.

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    unsigned int iMask =0x00020010;
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
        printf("5th and 18th bits is ON");
    }
    else
    {
        printf("bits are OFF");
    }

    return 0;
}
