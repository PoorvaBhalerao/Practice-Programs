// Write a program which accept string from user and display only digits from that string.
// Input: "marve89llous121"
// Output: 89121
// Input: "Demo"
// Output: 89121
#include<stdio.h>
#include<string.h>

void DisplayDigit(char *str)
{
    int i = 0;
    printf("Digits in string are:\n");
    while(*str != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c",str[i]);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}