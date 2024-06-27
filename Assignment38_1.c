//Write a program which accept one number from user and
// off 7th bit of that number if it is on return the modified number.
//7th bit means
// 0000    0000    0000    0000    0000    0000    0100    0000    
// 1111    1111    1111    1111    1111    1111    1011    1111
// -------------------------------------------------------------&
// 0000    0000    0000    0000    0000    0000    0000    0000    7th bit is turned oFF

//if I/P: 12
//0000    0000    0000    0000    0000    0000    0000    1100      7th bit is already OFF
//1111    1111    1111    1111    1111    1111    1011    1111
// -------------------------------------------------------------&
//0000    0000    0000    0000    0000    0000    0000    1100  =12

#include<stdio.h>
#include<stdbool.h>

void OFFbit(int iNo)
{
    unsigned int iMask =0xffffffbf;
    unsigned int iResult = 0;

    iResult = iNo & iMask;
    if(iNo == iResult)
    {
        printf("7th bit is already in OFF state\nUpdated number of %u",iResult);
    }
    else
    {
        printf("7th bit turned OFF\nUpdated number of %u",iResult);
    }   
    
}

int main()
{
    unsigned int iValue = 0;
    
    printf("Enter a number: ");
    scanf("%u",&iValue);

    OFFbit(iValue);    

    return 0;
}
