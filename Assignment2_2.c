//Accept one number from user and print the number of * on screen.
//using updator and while loop

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        printf("*\t");
        iNo--;
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