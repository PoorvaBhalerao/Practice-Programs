//accept number and convert it in heexadecimal and chk whether 4th bit is On or not

#include<stdio.h>
int main()
{
    unsigned int iValue= 0;
    unsigned int iMask = 0x00000008;
    unsigned int iResult = 0;
      
    
    printf("Enter number: ");
    scanf("%u", &iValue);

    iResult = iValue & iMask;

    if(iResult == iMask)
    {
        printf("4th bit is ON");
    }
    else
    {
        printf("4th bit is OFF");
    }
    
    return 0;
}