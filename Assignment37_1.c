//Accept number from user and Write a program which checks whether 15th bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    unsigned int iMask =0x00004000;
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
        printf("15th bit is ON");
    }
    else
    {
        printf("15th bit is OFF");
    }

    return 0;
}
