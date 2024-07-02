//Write a program which accept one number from user and two positions of bits from user and
//check whether bit at first position and bit at second position is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

void check_bits(int iNo, int iPos1, int iPos2) 
{
    int i1=0, i2=0, num1=0, num2=0, iResult=0;
    i1 = iPos1;                 //printf("%d\n", i1);
    i2 = iPos2;                 //printf("%d\n", i2);
    num1 = num2 = iNo;          //printf("%d\n",num1);
                                //printf("%d\n",num2);
    
    num1 = num1 >> (i1-1);      //printf("%d\n",num1);
    iResult = num1 & 1;         //printf("%d\n",iResult);
    if(iResult == 1)
    {
        printf("bit at %d Position is ON\n",i1);
    }
    else
    {
        printf("bit at %d Position is OFF\n",i1);
    }
    
    num2 = num2 >> (i2-1);      //printf("%d\n",num2);
    iResult = num2 & 1;         //printf("%d\n",iResult);
    if(iResult == 1)
    {
        printf("bit at %d Position is ON\n",i2);
    }
    else
    {
        printf("bit at %d Position is OFF\n",i2);
    }
}


int main()
{
    unsigned int iValue = 0;
    int P1=0, P2=0;
    
    printf("Enter a number: ");
    scanf("%u",&iValue);

    printf("Enter first position: ");
    scanf("%d",&P1);

    printf("Enter second position: ");
    scanf("%d",&P2);

    check_bits(iValue, P1, P2);    

    return 0;
}
