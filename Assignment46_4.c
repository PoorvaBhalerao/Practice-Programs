//Write an application which accept file name from user and display size of file.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0, Ret = 0, Total = 0;
    char FileName[30];
    char Buffer[100] = {'\0'};
    

    printf("Enter name of file you want to open : ");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file.");
    }
    
    while((Ret = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        Total = Total + Ret;
    }
    
    printf("size of file is: %d Bytes\n", Total);

    close(fd);


    return 0;
}