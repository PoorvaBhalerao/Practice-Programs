//Write a program which accept string from user and print below pattern
//Input: "Poorva"
//Output:   P   O   O   R   V   A
//          P   O   O   R   V   A            
//          P   O   O   R   V   A
//          P   O   O   R   V   A
//          P   O   O   R   V   A
//          P   O   O   R   V   A

#include<stdio.h>
#include<string.h>

char toUpper(char ch)
{
    if (ch >= 'a' && ch <= 'z') 
    {
        ch = ch - 32;
    }
    return ch;
}

void Display(const char *str) 
{
    int length = 0, i =0;
    const char *ptr = str;
    while(*ptr != '\0')
    {
        length++;
        ptr++;
    }
    
    for (i = 0; i < length; ++i) 
    {   
        const char  *ptr1 = str;
        while (*ptr1 != '\0') 
        {
            printf("%c\t", toUpper(*ptr1));
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