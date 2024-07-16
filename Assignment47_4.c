//Write a program which accepts file name from user and one character from user and 
//count number of occurence of that character from the file

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int CountChar(char FName[], char ch)
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
            if(Buffer[i] == ch)
            {
                iCount++;
            }
        }
    }

    close(fd);
    return iCount;
}

int main()
{
    char FileName[30];
    char ch;

    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter a character you want to search in file: ");
    scanf(" %c", &ch);

    iRet = CountChar(FileName, ch);

    printf("Number of occurence of character from file is %d",iRet);

    return 0;
}