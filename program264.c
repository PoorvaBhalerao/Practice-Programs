//Accept string from user and if string contians any capital letters then convert it into lower case
#include<stdio.h>

int StrlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    StrlwrX(Arr);

    printf("Updated string is: %s", Arr);


    return 0;
}