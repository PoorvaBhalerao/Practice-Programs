//File Handling
// Accept contents from user and write to file.


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

    write(fd, Arr,strlen(Arr));     // Due to write function every time ols contents are overwritten
                                    // so use append mode(O_APPEND)

    return 0;
}

