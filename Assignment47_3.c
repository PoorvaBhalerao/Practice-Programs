//Write a program which accepts file name from user and 
//count number of white spaces from that file.

// Input: Demo.txt
// Output: Number of white sapces are 3(imaginary)

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int CountWhiteSpaces(char FName[])
{
    int fd = 0, iRet = 0, i = 0, iCount = 0;
    char Buffer[100] = {'\0'};

    fd = open(FName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        for(i = 0; i<iRet; i++)
        {
            if(Buffer[i] == ' ')
            {
                iCount++;
            }
        }
    }
    return iCount;
}

int main()
{
    char FileName[30];

    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountWhiteSpaces(FileName);

    printf("Number of White spaces from file are %d", iRet);

    return 0;
}