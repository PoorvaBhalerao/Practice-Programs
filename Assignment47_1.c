//Write a program which accepts file name from user and 
//count number of capital characters from that file.

// Input: Demo.txt
// Output: Number of capital characters are 7(imaginary)

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int CountCapital(char FName[])
{
    char Buffer[100] = {'\0'};
    int fd = 0, Ret = 0, i = 0, iCount=0;

    fd = open(FName, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    while((Ret = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        for(i = 0; i<Ret; i++)
        {
            if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
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

    iRet = CountCapital(FileName);

    printf("Number of Capital characters are %d", iRet);

    return 0;
}