
// Write a string and display length of Capital Characters of string

#include<stdio.h>

int strlenCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' &&  *str <= 'Z')
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

    iRet = strlenCapital(Arr);       

    printf("Length of Capital letters is: %d\n",iRet);


    return 0;
}