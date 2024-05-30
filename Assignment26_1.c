// Write a program which accept string from user and convert it into lower case.
// Input: "Marvellous Multi OS"
// Output: marvellous multi os
#include<stdio.h>
#include<string.h>

void strlwrx(char *str)
{
    int i = 0;
    while(*str != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
            //printf("%c\n",str[i]);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    printf("Modified string is: %s", Arr);

    return 0;
}