//File Handling
// Read all contents(data) of file and display no of bytes of file or size of file


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
    int iSum = 0;

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
        iSum = iSum + iRet;         //iSum is to get no of bytes of file
    }

    printf("Size of file is %d bytes\n",iSum);
    close(fd);

    return 0;
}

