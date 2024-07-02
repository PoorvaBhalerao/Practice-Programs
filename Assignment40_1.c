// Write a program which accept one number and position from user and 
//chk whether bit at that position is ON or OFF.
//If bit is one return true otherwise return false.
//Input:    10
//        pos:    2
//Output: True(bit is ON)

#include<stdio.h>
#include<stdbool.h>

bool Checkbit(int iNo, int ipos)
{
    int iResult = 0;
    iNo = iNo >> ipos;
    iResult = iNo & 1;
    if(iResult == 1)
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
    int iposition = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%u",&iValue);

    printf("Enter position of bit between(0-31): ");
    scanf("%d",&iposition);

    bRet = Checkbit(iValue, iposition);

    if(bRet == true)
    {
        printf("%d position of bit is ON\n");
    }
    else
    {
        printf("%d position of bit is OFF\n");
    }

    return 0;
}