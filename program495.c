//File Handling
//Accept filename from user and count digits from that file.

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
    int i = 0, iCount = 0;

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
        for(i = 0; i<iRet; i++)
        {
            if(Buffer[i] >= '0' && Buffer[i] <= '9')
            {
                iCount++;
            }
        }
    }

    printf("Number of digits from file are %d\n",iCount);
    close(fd);

    return 0;
}

