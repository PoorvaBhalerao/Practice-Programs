//Accept character from user and If character is small display its corresponding capital character, and if it is small display its corresponding capital
//In other cases diaplay as it is
//input: Q
//output: q
//Input: %
//Output: %

#include<stdio.h>


void Display(char ch)
{
    if(ch >='a' && ch <='z')
    {
        ch = ch -32;
        printf("Capital character: %c", ch);
    }
    else if(ch >='A' && ch <='Z')
    {
        ch = ch + 32;
        printf("Small character: %c", ch);
    }
    else
    {
        printf("Character: %c",ch);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter a character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}