//Write a program which accepts 2 string from user and compare both strings.
//if strings are identical returrn true and if strings are differect return false.(Implement strcmp() function)
//Input: "Marvellous Infosystems"
//      "Marvellous Infosystems"
//Output: True

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool strcmpX(char *first, char *second)
{
    int i = 0;
    bool bflag = false;
    while((*first != '\0') && (*second != '\0'))
    {
        if(*first != *second)
        {
            break;
        }
        first++;
        second++;
    }
    if((*first == '\0') && (*second == '\0'))
    {
        bflag = true;
    }
    return bflag;
}

int main()
{
    char Arr[50];
    char Brr[50];
    bool bRet = false;

    printf("Enter First string: ");
    scanf("%[^\n]s",Arr);

    printf("Enter second string: ");
    scanf("%[^\n]s",Brr);    

    bRet = strcmpX(Arr, Brr);

    if(bRet == true)
    {
        printf("Strings are identical");
    }
    else
    {
        printf("Strings are different");
    }    

    return 0;
}