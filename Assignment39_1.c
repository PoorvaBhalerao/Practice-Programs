// Write a program which accept one number from user and
//Count number of ON(1) bits in it without using % and / operator.
//Input: 11
//Output: 3

#include<stdio.h>
#include<stdbool.h>

int CountON(int iNo)
{
    int icount = 0;

    while(iNo != 0)
    {
        icount = icount + (iNo & 1);
        //printf("%d\t",icount);
        iNo = iNo >> 1;
        printf("%d\n",iNo);
    }
    return icount;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    
    printf("Enter a number: ");
    scanf("%u",&iValue);

    iRet = CountON(iValue);    

    printf("Number of ON(1) bits are: %u",iRet);
    
    return 0;
}
