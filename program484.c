//File Handling
// Read all contents(data) of file and print how namy bytes of data you read on screen.


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
        printf("%d\n",iRet);        // how many bytes are read and return bytes of read are printed
    }

    close(fd);

    return 0;
}

