//Accept string from user and accept a character from user and 
//display count of frequency of that character

#include<stdio.h>
#include<stdbool.h>

int CountFrequency(char *str, char ch)
{
    int iCnt = 0;
    

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
          
        }
        
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[100];
    int iRet = 0;
    char cValue;

    printf("Enter a string: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character you want:\n");
    scanf(" %c", &cValue);                  // the space before %c indicates we flushout previous \n and then
                                            // it is going to accpet our character

    iRet = CountFrequency(Arr, cValue);       

    printf("Frequency of character in string is %d",iRet);

    return 0;
}