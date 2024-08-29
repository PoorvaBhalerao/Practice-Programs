//File Handling
// Read contents of file.


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
    
    iRet = read(fd, Arr, 10);

    printf("Number of bytes successfully read from file: %d\n",iRet);

    printf("Data from file: %s\n",Arr);

    close(fd);

    return 0;
}

