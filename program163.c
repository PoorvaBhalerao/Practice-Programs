// Accpet String and display length of string using  function(using while) and not using inbuilt function

#include<stdio.h>

int strlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}


int main()
{
    char Arr[50];

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);        // [^'\n'] is regular expression...regex

    iRet = strlenX(Arr);       //Display(100)...imaginary address

    printf("String length is: %d\n",iRet);


    return 0;
}