//Write a program which accept string from user and print below pattern
//Input: "Poorva"
//Output:   p   o   o   r   v   a
//          p   o   o   r   v   a            
//          p   o   o   r   v   a
//          p   o   o   r   v   a
//          p   o   o   r   v   a
//          p   o   o   r   v   a

#include<stdio.h>
#include<string.h>

char toLower(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
    }
    return ch;
}

void Display(const char *str) 
{
    int length = 0, i = 0;
    const char *ptr = str;
    while(*ptr != '\0')
    {
        length++;
        ptr++;
    }   

    for(i = 0; i<length ; i++)
    {
        const char *ptr1 = str;
        while(*ptr1 != '\0')
        {
            printf("%c\t", toLower(*ptr1));
            ptr1++;
        }
        printf("\n");
    }
}


int main()
{
    char Arr[50];

    printf("Enter a string: \n");
    scanf("%[^'\n']s", Arr);

    Display(Arr);

    return 0;
}