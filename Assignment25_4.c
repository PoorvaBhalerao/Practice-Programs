// Write a program which accept string from user and 
// check wheher it contains vowels in it or not.
// Input: "marvellous"
// Output: True
// Input: "xyz"
// Output: False

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool ChkVowel(char *str)
{
    int i = 0;
    bool bFlag = false;
    
    while(*str != '\0')
    {
        if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            bFlag = true;
        }
        else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            bFlag = true;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[30];
    bool bRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("It contains vowel");
    }
    else
    {
        printf("It not contains vowel");
    }

    return 0;

}