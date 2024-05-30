// Write a program which accept string from user and toggle the case.
// Input: "Marvellous Multi OS"
// Output: mARVELLOUS mULTI os
#include<stdio.h>
#include<string.h>

void strtogglex(char *str)
{
    int i = 0;
    while(*str != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);

    strtogglex(Arr);

    printf("Modified string is: %s", Arr);

    return 0;
}