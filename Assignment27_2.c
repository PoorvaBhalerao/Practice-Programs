// Write a program which accept string from user and accept one character.
//Return frequency os that character in string.
//Input: "Marvellous Infosystems"
//Character: e
//Output: 2
//Input: "Marvellous Infosystems"
//Character: w
//Output: 0
#include<stdio.h>
#include<string.h>

int ChkCountChar(char *str, char ch)
{
    int i = 0;
    int iCount = 0;
    while(*str != '\0')
    {
        if(str[i] == ch)
        {
           iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character: ");
    scanf(" %c",&cValue);   //the space before %c to consume any leading whitespace

    iRet = ChkCountChar(Arr, cValue);

    printf("The frequency of character in string is: %d",iRet);
    return 0;
}