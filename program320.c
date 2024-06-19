//Accept number from user and we have to check whether 6th and 9th th bit of that number is ON or OFF.
//if one bit is off then result if off.
//1 0010 0000 = 256+32

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    unsigned int iMask = 288;
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
    bool bRet = false;
    unsigned int iValue = 0;
      
    printf("Enter number: ");
    scanf("%u", &iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("6th and 9th bit are ON\n");
    }
    else
    {
        printf("bits are OFF\n");
    }
    
    
    return 0;
}

/*
    

    op1     op2     &       |       ^
---------------------------------------------
    1       1       1       1       0
    1       0       0       1       1
    0       1       0       1       1
    0       0       0       0       0
---------------------------------------------

*/