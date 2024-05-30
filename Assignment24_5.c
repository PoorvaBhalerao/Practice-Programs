// Accept character from user and display its ASCII value in decimal, octal and hexadecimal format
// Input: A 
// Output: Decimal     65
//         Octal       0101
//         Hexadecimal 0X41

#include<stdio.h>


void Display(char ch)
{
    printf("Character Entered: %c\nDecimal: %d\nHexadecimal: %x\nOctal: %o\n",ch,ch,ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}