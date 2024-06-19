//Accept number from user and we have to check whether 4 th bit of that number is ON or OFF.

#include<stdio.h>
/*
    iNo     11      0   0   0   0   1   0   1   1   //here 4 th bit is on
                    
            Index   8   7   6   5   4   3   2   1
*/

//if we use bitwise & of (mask) 00001000(4th bit is 1) to given number and chk result of that bit to 1 then we get to know it is ON(1) or OFF

int main()
{
    unsigned int iValue= 0;
    unsigned int iMask = 8;
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

/*
    

    op1     op2     &       |       ^
---------------------------------------------
    1       1       1       1       0
    1       0       0       1       1
    0       1       0       1       1
    0       0       0       0       0
---------------------------------------------

*/