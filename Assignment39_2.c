// Write a program which accept one number from user and
//display position of common ON bits from that two numbers.
//Input: 10    15       1010    1111
//Output: 2  4(position)

#include<stdio.h>
#include<stdbool.h>

void CommonONBits(int iNo1, int iNo2)
{
    int ipos = 1;
    int common_bits = iNo1 & iNo2;      // due to & operator common ON(1) are remaining in common_bits

    printf("Common ON bits position are:\n");
    while(common_bits != 0)
    {
        if(common_bits & 1)
        {
            printf("%d\t",ipos);    //if at first bit is ON(1) then print it
        }
        ipos++;
        common_bits = common_bits >> 1; //shift common_bits to right by 1 bit
    }

    if(ipos == 1)
    {
        printf("No common ON bits found\n");
    }
    
}

int main()
{
    unsigned int iValue1 = 0;
    unsigned int iValue2 = 0;
    
    printf("Enter first number: ");
    scanf("%u",&iValue1);

    printf("Enter second number: ");
    scanf("%u",&iValue2);

    CommonONBits(iValue1, iValue2); 

    return 0;
}
