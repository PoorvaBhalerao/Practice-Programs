//Accept number from user and we have to check whether 6 th bit of that number is ON or OFF.
//1 0000 0000

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    unsigned int iMask = 32;
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
        printf("6th bit is ON\n");
    }
    else
    {
        printf("6th bit is OFF\n");
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