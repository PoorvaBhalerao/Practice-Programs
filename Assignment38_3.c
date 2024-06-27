//Write a program which accept one number from user and
// toggle 7th bit of that number and return the modified number.


#include<stdio.h>
#include<stdbool.h>

void Offbit(int iNo)
{
    unsigned int iMask =0x00000040;
    unsigned int iResult = 0;

    iResult = iNo ^ iMask;
    
    printf("Updated number of %u",iResult);
  
    
}

int main()
{
    unsigned int iValue = 0;
    
    printf("Enter a number: ");
    scanf("%u",&iValue);

    Offbit(iValue);    

    return 0;
}
