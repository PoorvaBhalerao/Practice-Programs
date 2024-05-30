// Write a program which accept string from user and accept one character.
//check whether that character is present in string or not.
//Input: "Marvellous Infosystems"
//Character: e
//Output: True
//Input: "Marvellous Infosystems"
//Character: w
//Output: False
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool ChkChar(char *str, char char1)
{
    int i = 0;
    bool bFlag = false;
    while(*str != '\0')
    {
        if(str[i] == char1)
        {
           bFlag = true;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character: ");
    scanf(" %c",&cValue);   //the space before %c to consume any leading whitespace

    bRet = ChkChar(Arr, cValue);

    if(bRet == true)
    {
        printf("Character is present");
    }
    else
    {
        printf("Character is not present");
    }

    return 0;
}