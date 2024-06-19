//Accept number from user and do 4th positions bit OFF. 
//and after 4th bit is being OFF return updated number.
/*
Input:12    0   0   0   0   1   1   0   0       binary
Output:4    0   0   0   0   0   1   0   0       updated number after 4th bit is OFF

            0   0   0   0   1   1   0   0
Mask        1   1   1   1   0   1   1   1
        -----------------------------------------&
            0   0   0   0   0   1   0   0

1111    1111    1111    1111    1111    1111    1111    0111
 f       f       f       f       f       f       f       7
0xfffffff7      hexadecimal Mask
*/  
#include<stdio.h>
#include<stdbool.h>

void CheckBit(int iNo)
{
    unsigned int iMask = 0xfffffff7;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    printf("Updated Number is %u", iResult);
}

int main()
{
    unsigned int iValue = 0;
      
    printf("Enter number: ");
    scanf("%u", &iValue);

    CheckBit(iValue);
    
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
