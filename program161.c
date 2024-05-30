// Accpet String and display it using function

#include<stdio.h>

void Display(char *str)
{
    printf("%c\n", *str);
    str++;

    printf("%c\n", *str);
    str++;

    printf("%c\n", *str);
    str++;

}


int main()
{
    char Arr[50];

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);        // [^'\n'] is regular expression...regex

    Display(Arr);       //Display(100)...imaginary address


    return 0;
}