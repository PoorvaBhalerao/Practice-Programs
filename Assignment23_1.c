// Accept Character from user and check whether it is alphabet or not(A-Z a-z)
// Input:  f
// Output: True
// Input:  &
// Output: False
// Input:  P 
// Output: True 
#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >='A' && ch <='Z')) 
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is an Alphabet");
    }
    else
    {
        printf("It is not an alphabet");
    }

    return 0;
}