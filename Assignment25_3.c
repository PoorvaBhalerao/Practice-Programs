// Write a program which accept string from user and count Difference between
// frequency of small characters and frequency of capital characters.
// Input: "MarvellouS"
// Output: 6(8-2)

#include<stdio.h>

int Difference(char *str)
{
    int iCapCnt = 0, iSmallCnt = 0;
    

    while(*str != '\0')
    {
        int i = 0;
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            iSmallCnt++;

        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            iCapCnt++;
        }
        str++;
    }
    return iSmallCnt - iCapCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference between frequency of Small letters and capital letters is %d", iRet);
    return 0;

}