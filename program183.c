//Accept string from user and accept a character from user and 
//display index of Last occurence of that character

#include<stdio.h>


int ChkOccurence(char *str, char ch)
{
    int iCnt = 1, iPos = -1;
    

    while(*str != '\0')
    {
        if(*str == ch)
        {
           iPos = iCnt;           
        }
        iCnt++;
        str++;
    }
    return iPos;
    
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

    if(iRet == -1)
    {
        printf("There is no such letter");
        
    }
    else
    {
        printf("Index of Last occurence of character is: %d", iRet);
    }


    return 0;
}