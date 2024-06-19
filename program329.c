//Accept number from user and do 10th positions bit OFF. 
//and after 16th bit is being OFF return updated number.
/*

1111    1111    1111    1111    1111    1101    1111    1111
 f       f       f       f       f        d       f       f
0xffff7fff      hexadecimal Mask
*/  
#include<stdio.h>
#include<stdbool.h>

void CheckBit(int iNo)
{
    unsigned int iMask =0xfffffdff;
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
