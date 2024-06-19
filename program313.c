//Use of BitWise ^(XOR) operator
#include<stdio.h>

int main()
{
    unsigned int iNo1= 0, iNo2 = 0, iRet = 0;
    
    printf("Enter First number: ");
    scanf("%d", &iNo1);

    printf("Enter Second number: ");
    scanf("%d", &iNo2);

    iRet = iNo1 ^ iNo2;

    printf("Result of bitwise ^ is %u", iRet);

    return 0;
}

/*
    Bitwise ^

    op1     op2     Result
    1       1       0
    1       0       1
    0       1       1
    0       0       0


    iNo1        11      0   0   0   0   1   0   1   1

    iNo2        15      0   0   0   0   1   1   1   1
------------------------------------------------------------- ^
    iNo1^iNo2           0   0   0   0   0   1   0   0   =   4
*/
/*
    iNo1        67      0   1   0   0   0   0   1   1

    iNo2        34      0   0   1   0   0   0   1   0   
------------------------------------------------------------- ^
    iNo1^iNo2           0   1   1   0   0   0   0   1   =   97
*/