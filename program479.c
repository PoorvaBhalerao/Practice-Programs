//File Handling
// Accept contents from user and write to file and return number of bytes we are written to file.


#include<stdio.h>       
#include<stdlib.h>      
#include<unistd.h>      
#include<fcntl.h>      
#include<string.h> 

int main()
{
    int fd = 0;
    char FileName[30];
    char Arr[100];
    int iRet = 0;

    printf("Enter the file name that you want to Open: \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR | O_APPEND);  //O_APPEND is used to append at old contents

    if(fd == -1)                        
    {
        printf("Unable to open the file\n");
        return 0;
    }
    
    printf("Enter the data that you want to write: \n");
    scanf(" %[^'\n']s",Arr);

    iRet = write(fd, Arr, strlen(Arr));     //write(file descripter, data that we want to write, total no of bytes to written);

    printf("Number of bytes written into file are : %d\n",iRet);

    close(fd);

    return 0;
}

