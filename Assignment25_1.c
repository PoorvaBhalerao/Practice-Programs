// Write a program which accept string from user and count number of capital characters
// Input: "Marvellous Multi OS"
// Output: 4

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    

    while(*str != '\0')
    {
        int i = 0;
        if(str[i] >= 'A' && str[i] <= 'Z')
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

    iRet = CountCapital(arr);

    printf("Capital letters in String are %d", iRet);
    return 0;

}