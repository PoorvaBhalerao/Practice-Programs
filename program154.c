// Accept character from user and check whether character is capital or not
// Dont use ASCII values not good practice and not good for readability

#include<stdio.h>
#include<stdbool.h>
void CheckCapital(char ch)
{
    if((ch >= 65) && (ch <= 90))    // not good for readability
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