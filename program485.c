//File Handling
// Read all contents(data) of file and print on screen.


#include<stdio.h>       
#include<stdlib.h>      
#include<unistd.h>      
#include<fcntl.h>      
#include<string.h> 

int main()
{
    int fd = 0;
    char FileName[30];
    char Buffer[100] = {'\0'};
    int iRet = 0;

    printf("Enter the file name that you want to Open: \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);  

    if(fd == -1)                        
    {
        printf("Unable to open the file\n");
        return 0;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        printf("%s",Buffer);
        memset(Buffer, 0, sizeof(Buffer));      // to avoid unrequired content at end of file
                                                // memset(addr of array to initialise, bytes with initialise, size of addr of bytes we want to reset)
                                                // memset if used to reset buffer to read next bytes
    }

    close(fd);

    return 0;
}

