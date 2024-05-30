// Write a program which accept string from user and convert it into upper case.
// Input: "Marvellous Multi OS"
// Output: MARVELLOUS MULTI OS
#include<stdio.h>
#include<string.h>

void struprx(char *str)
{
    int i = 0;
    while(*str != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
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

    struprx(Arr);

    printf("Modified string is: %s", Arr);

    return 0;
}