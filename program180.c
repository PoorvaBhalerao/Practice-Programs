//Accept string from user and accept a character from user and 
//display index of first occurence of that character

#include<stdio.h>
#include<stdbool.h>

int ChkOccurence(char *str, char ch)
{
    int iCnt = 1;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char Arr[100];
    int iRet = 0;
    char cValue;

    printf("Enter a string: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character ypu want to search:\n");
    scanf(" %c", &cValue);                  // the space before %c indicates we flushout previous \n and then
                                            // it is going to accpet our character

    iRet = ChkOccurence(Arr, cValue);        

    if(iRet != -1)
    {
        printf("Index of first occurence of character is: %d", iRet);
    }
    else
    {
        printf("There is no such letter");
        
    }


    return 0;
}