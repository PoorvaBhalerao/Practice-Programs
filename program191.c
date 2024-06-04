// Accpet string and reverse that string (in place)

#include<stdio.h>

void strRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}

int main()
{
    char Arr[100];
    
    printf("Enter a string: \n");
    scanf("%[^'\n']s", Arr);

    strRevX(Arr);    

    printf("Reversed string is: %s\n",Arr);


    return 0;
}