//Accept string from user and accept a character from user and 
//check whether that character is present in that string or not

#include<stdio.h>
#include<stdbool.h>

bool ChkOccurence(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        
        str++;
    }
    return bFlag;
}
int main()
{
    char Arr[100];
    bool bRet = false;
    char cValue;

    printf("Enter a string: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character ypu want to search:\n");
    scanf(" %c", &cValue);                  // the space before %c indicates we flushout previous \n and then
                                            // it is going to accpet our character

    bRet = ChkOccurence(Arr, cValue);        

    if(bRet == true)
    {
        printf("character is present in string");
    }
    else
    {
        printf("character is not present in string");
    }


    return 0;
}