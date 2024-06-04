//Accept string from user and check whether the letter 'l'(small) is present in that string or not
// case sensitive code
#include<stdio.h>
#include<stdbool.h>

bool ChkOccurence(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == 'l') 
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

    printf("Enter a string: \n");
    scanf("%[^'\n']s", Arr);

    bRet = ChkOccurence(Arr);       

    if(bRet == true)
    {
        printf("l is present in string");
    }
    else
    {
        printf("l is not present in string");
    }


    return 0;
}