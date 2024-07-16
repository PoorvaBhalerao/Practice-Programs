//Write a program which accepts file name and one count from user
//and read that number of characters from starrting position

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int ReadChar(char FName[], int iSize)
{
    int fd = 0, iRet = 0, i = 0, iCount = 0;
    char Buffer[100] = {'\0'};

    fd = open(FName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    iRet = read(fd, Buffer, iSize);

    printf("Data to read is: %s\n", Buffer);

    close(fd);
}

int main()
{
    char FileName[30];
    int No = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the number of bytes you want to read from file: ");
    scanf("%d", &No);

    ReadChar(FileName, No);

    return 0;
}