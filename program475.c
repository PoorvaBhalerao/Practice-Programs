//File Handling
//Open the file.

#include<stdio.h>       
#include<stdlib.h>      
#include<unistd.h>      
#include<fcntl.h>       

int main()
{
    int fd = 0;
    char FileName[30];

    printf("Enter the file name that you want to Open: \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);  

    if(fd == -1)                        
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File gets successfully opened with fd %d\n",fd);
    }

    return 0;
}

/*
    O_RDONLY        READ MODE
    O_WRONLY        WRITE NODE
    O_RDWR          READ + WRITE MODE
    O_CREATE        CREATE MODE
    O_APPEND        APPEND MODE
*/