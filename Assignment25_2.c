// Write a program which accept string from user and count number of small characters
// Input: "Marvellous"
// Output: 9

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    

    while(*str != '\0')
    {
        int i = 0;
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            iCnt++;
            //printf("%d\t%c\n",iCnt,str[i]);
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Small letters in String are %d", iRet);
    return 0;

}