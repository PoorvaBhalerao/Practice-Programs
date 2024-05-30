// Write a program which accept string from user and reverse that string in place
// Input: "abcd"
// Output: "dcba"
// Input: "abba"
// Output: "abba"

#include<stdio.h>
#include<string.h>

void StrRevX(char *str)
{
    char Temp;
    int iStart = 0, iEnd = 0;
    int Strlen = 0;
    
    while(str[Strlen] != '\0')
    {
        Strlen++;
    } 
    //printf("%d",length); 
    
    for(iStart = 0, iEnd= Strlen-1; iStart<iEnd; iStart++,iEnd--)
    {
        Temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = Temp;
    }
}

int main()
{
    char Arr[20]; 
    int length = 0;  

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);
    
    StrRevX(Arr);

    printf("Modified Reversed String is: %s",Arr);
    return 0;
}