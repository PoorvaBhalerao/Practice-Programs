// Accept character from user and check whether character is small or not

#include<stdio.h>
#include<stdbool.h>
void CheckSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        printf("It is small letter");
    }
    else
    {
        printf("It is not small letter");
    }
}

int main()
{
    char cValue;
    bool bRet = false;

    printf("Enter one character :\n");
    scanf("%c", &cValue);

    CheckSmall(cValue);
    
    return 0;
}