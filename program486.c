//File Handling
// Read all contents(data) of file and write to another file.


#include<stdio.h>       
#include<stdlib.h>      
#include<unistd.h>      
#include<fcntl.h>      
#include<string.h> 

int main()
{
    int fdRead = 0, fdWrite = 0;
    char FileName[30];
    char Buffer[100] = {'\0'};
    int iRet = 0;

    printf("Enter the Existing file name that you want to Open: \n");
    scanf("%s",FileName);

    fdRead = open(FileName,O_RDWR);  

    if(fdRead == -1)                        
    {
        printf("Unable to open the file\n");
        return 0;
    }

    printf("Enter the name of file that you want to create: \n");
    scanf("%s",FileName);

    fdWrite = creat(FileName, 0777);

    if(fdWrite == -1)
    {
        printf("Unable to create new file\n");
        return 0;
    }

    while((iRet = read(fdRead, Buffer, sizeof(Buffer))) != 0)   //read(from fdread, contents to read to, no of bytes of contents to read)
    {
        write(fdWrite,Buffer,iRet);             // write(to fdwrite, from buffer, of iRet bytes)
        memset(Buffer, 0, sizeof(Buffer));      // after writing reset the buffer
    }

    close(fdRead);

    return 0;
}

