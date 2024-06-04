
// Write a string and display length of Small Characters of string

#include<stdio.h>

int strlenSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 97 &&  *str <= 122)
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

    iRet = strlenSmall(Arr);        
    printf("Length of Small letters is: %d\n",iRet);


    return 0;
}