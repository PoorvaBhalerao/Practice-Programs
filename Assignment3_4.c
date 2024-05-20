// Accept one character from user and convert case of that character
#include<stdio.h>
#include<ctype.h>

char DisplayConvert(char CValue)
{
    if(CValue == toupper(CValue))
    {
        printf("Output: %c",tolower(CValue));
    }
    else if(CValue == tolower(CValue))
    {
        printf("Output: %c",toupper(CValue));
    }
}


int main()
{
    char cValue = '\0';
    
    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}