//Accept string from user and if string contians any snall letters then convert it into Upper case
#include<stdio.h>

int StrUprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            (*str) = (*str) - 32;            
        }
        str++;        
    }  
}

int main()
{
    char Arr[30];

    printf("Enter String: \n");
    scanf("%[^'\n']", Arr);

    StrUprX(Arr);

    printf("Updated string is: %s", Arr);


    return 0;
}