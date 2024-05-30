// Write a program which accept string from user and display it in reverse order.
// Input: "MarvellouS"
// Output: "SuollevraM"

#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    int iStart = 0, iEnd = 0;
    int length =strlen(str) ; 
    char Temp;
    
    for(iStart = 0, iEnd=length-1 ; iStart < iEnd ; iStart++, iEnd--)
    {
        Temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = Temp;
    }
}


int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Reversed String is: %s\n",arr);

    return 0;
}
