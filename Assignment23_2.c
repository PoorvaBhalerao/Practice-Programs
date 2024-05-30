// Accept Character from user and check whether it is Capital or not(A-Z)
// Input:  f
// Output: False
// Input:  A
// Output: True

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    if(ch >='A' && ch <='Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital");
    }
    else
    {
        printf("It is not Capital");
    }

    return 0;
}