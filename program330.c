//Accept number from user and toggle the 4th bits position. 
//and return updated number.(if 4th position and no is 12 and 21)
/*
Input:12        0   0   0   0   1   1   0   0
Output:         0   0   0   0   0   1   0   0    = 4

Input:21        0   0   0   1   0   1   0   1
Output:         0   0   0   1   1   1   0   1    = 29

12              0   0   0   0   1   1   0   0
Mask            0   0   0   0   1   0   0   0
            ------------------------------------ ^
                0   0   0   0   0   1   0   0       it is toggled

4               0   0   0   0   0   1   0   0
Mask            0   0   0   0   1   0   0   0
            ------------------------------------ ^
                0   0   0   0   1   1   0   0       it is toggled

*/

#include<stdio.h>
#include<stdbool.h>

void CheckBit(int iNo)
{
    unsigned int iMask =0x00000008;
    unsigned int iResult = 0;

    iResult = iNo ^ iMask;

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
