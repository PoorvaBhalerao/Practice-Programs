//Accept one number from user and print the number of * on screen.
//using updator

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a number: ");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}