// Accept character from user and check whether digit is entered or not

#include<stdio.h>
#include<stdbool.h>
void CheckDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is not a digit");
    }
}

int main()
{
    char cValue;
   
    printf("Enter one character :\n");
    scanf("%c", &cValue);

    CheckDigit(cValue);
    
    return 0;
}