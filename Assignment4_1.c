// Write a program which accept number from user and display its multiplication of factors
//Input: 12
//Output: 144   (1*2*3*4*6)
//Input: 13
//Output:   1   (1)
#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0, iFact = 1;
    for(i = 1; i<iNo; i++)
    {
        if(iNo %i == 0)
        {
            iFact = iFact * i;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors of %d is %d",iValue,iRet);
    
    return 0;
}