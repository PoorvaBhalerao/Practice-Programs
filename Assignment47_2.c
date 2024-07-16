//Write a program which accepts file name from user and 
//count number of small characters from that file.

// Input: Demo.txt
// Output: Number of small characters are 7(imaginary)

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int CountSmall(char FName[])
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
            if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
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

    iRet = CountSmall(FileName);

    printf("Number of Small characters from file are %d", iRet);

    return 0;
}