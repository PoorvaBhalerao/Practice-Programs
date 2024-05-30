// Write a program which accept string from user and accept one character.
//Return index of first occuence of that character.
//Input: "Marvellous Infosystems"
//Character: M
//Output: 1
//Input: "Marvellous Infosystems"
//Character: w
//Output: -1
#include<stdio.h>
#include<string.h>

int FirstOccChar(char *str, char ch)
{
    
    int i = 0;
    int iIndex = -1;
    
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iIndex = i+1;
            break;
        }
        i++;
    
    }
    return iIndex;
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

    iRet = FirstOccChar(Arr, cValue);

    if(iRet >= 0)
    {
        printf("Index of First Occurence of character is: %d",iRet);
    }
    else
    {
        printf("There is no such character in string");
    }
    return 0;
}