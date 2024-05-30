// Stringlength using inbuilt function

#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);        // [^'\n'] is regular expression...regex

    iRet = strlen(Arr);       // we get length os string...Inbuilt function 

    printf("String length is: %d\n", iRet);

    return 0;
}