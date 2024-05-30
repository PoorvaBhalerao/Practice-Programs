// Accpet String and display it using function(using while)

#include<stdio.h>

void Display(char *str)
{
   while(*str != '\0')
   {
       printf("%c\n", *str);
       str++;
   }

}


int main()
{
    char Arr[50];

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);        // [^'\n'] is regular expression...regex

    Display(Arr);       //Display(100)...imaginary address


    return 0;
}