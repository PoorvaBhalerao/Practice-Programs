//Accept string from user and display
#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter String: \n");
    scanf("%[^'\n']", Arr);

    printf("Entered string is: %s", Arr);


    return 0;
}