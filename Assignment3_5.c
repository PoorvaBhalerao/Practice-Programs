//Accept on character from user and check whether that character is vowel(a, e, i ,o, u) or not.
//Input: E    Output: TRUE
//Input: d    Output: FALSE
#include<stdio.h>
#include<ctype.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch)
{
    ch = tolower(ch);
    if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}



