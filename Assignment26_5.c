// Write a program which accept string from user and count number of white spaces.
// Input: "MarvellouS"
// Output: 0
// Input: "Marvellous Infosystems By piyush khairnar"
// Output: 4
#include<stdio.h>
#include<string.h>

int CountWhiteSpaces(char *str)
{
    int i = 0, iCount = 0;
    
    while(*str != '\0')
    {
        if(str[i] == ' ')
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
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteSpaces(Arr);

    printf("Count of white spaces in string are: %d",iRet);

    return 0;
}