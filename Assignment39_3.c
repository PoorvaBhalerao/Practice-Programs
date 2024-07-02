//Write a program which accept one number from user and
//check whether 9th and 12th bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

void check_bits(int iNo) 
{
    unsigned int iMask1 = 0x00000100;    // to check 9th bit is ON or OFF
    unsigned int iMask2 = 0x00000800;    // to check 12 th bit is ON or OFF
    unsigned int iResult = 0;
    // Check 9th bit
    iResult = iNo & iMask1;

    if(iResult == iMask1)
    {
        printf("9th bit is ON\n");
    }
    else
    {
        printf("9th bit is OFF\n");
    }

    // Check 12th bit
    iResult = iNo & iMask2;

    if(iResult == iMask2)
    {
        printf("12th bit is ON\n");
    }
    else
    {
        printf("12th bit is OFF\n");
    }

}


int main()
{
    unsigned int iValue = 0;
    
    printf("Enter a number: ");
    scanf("%u",&iValue);

    check_bits(iValue);    

    return 0;
}
