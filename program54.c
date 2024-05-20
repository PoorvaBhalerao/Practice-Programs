// Accept number from user and split that number and display seperate digits of that number on screen.
//give negative number so use updator to display output
#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}