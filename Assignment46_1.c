//Write an application which accept file name from user and open file in read mode.
// Input: Demo.txt
// Output: File opened Successfully

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd;
    char FileName[30];

    printf("Enter the fileName you want to open: ");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File has been opened Successfully with fd : %d", fd);
    }
    
    return 0;
}

