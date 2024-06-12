//Accept string from user and toggle the case of string(capital to small and small to capital)
#include<stdio.h>

int StrToggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            (*str) = (*str) - 32;            
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            (*str) = (*str) + 32;
        }
        str++;        
    }  
}

int main()
{
    char Arr[30];

    printf("Enter String: \n");
    scanf("%[^'\n']", Arr);

    StrToggleX(Arr);

    printf("Updated string is: %s", Arr);


    return 0;
}