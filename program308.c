//Accept number from user and convert it into binary and display it.

#include<stdio.h>

void DisplayBinary(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        printf("%d", iDigit);       // no displayed in reverse format
        iNo = iNo / 2;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    DisplayBinary(iValue);

    return 0;
}