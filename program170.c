// Accept string from user and display count of vowels from string(case sensitive)

#include<stdio.h>

int CountVowel(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') ||  (*str == 'e') ||  (*str == 'i') ||  (*str == 'o') ||  (*str == 'u'))
        {
            iCnt++;
        }
        
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter a string: \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountVowel(Arr);        
    printf("No of Vowels in string are: %d\n",iRet);


    return 0;
}