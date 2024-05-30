//Accept character from user and If character is small display its corresponding capital character, and if it is small display its corresponding capital
//In other cases diaplay as it is
//input: Q
//output: Q   R   S   T   U   V   W   X   Y   Z
//Input: m
//Output: m  l   k   j   i   h   g   f   e   d   c   b   a
//input: 8
//Output: 

#include<stdio.h>


void Display(char ch)
{
    if(ch >='a' && ch <='z') 
    {
        int i = 0;
        for(i = ch; i>='a'; i--)
        {
            printf("%c\t",i);
        }
    }
    else if(ch >='A' && ch <='Z')
    {
        int i = 0;
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c\t",i);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}