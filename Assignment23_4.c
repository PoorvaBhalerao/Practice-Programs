// Accept Character from user and check whether it is Small or not(a-z)
// Input:  f
// Output: True
// Input:  A
// Output: False

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    if(ch >='a' && ch <='z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character: ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is Small");
    }
    else
    {
        printf("It is not Small");
    }

    return 0;
}