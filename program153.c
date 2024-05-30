// Accept character from user and check whether character is capital or not

#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("It is capital letter");
    }
    else
    {
        printf("It is not capital letter");
    }
}

int main()
{
    char cValue;
    bool bRet = false;

    printf("Enter one character :\n");
    scanf("%c", &cValue);

    CheckCapital(cValue);
    
    return 0;
}