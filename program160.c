// Accpet full name from user and display it on screen

#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your full name:\n");
    scanf("%[^'\n']s", Arr);        // [^'\n'] is regular expression...regex

    printf("Hello : %s\n",Arr);


    return 0;
}