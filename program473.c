//File Handling
//create a new file

#include<stdio.h>       //standatd input output
#include<stdlib.h>      //for dynamic memory allocation
#include<unistd.h>      //unistd for universal standard:K and R, ANSI, C99, INO
#include<fcntl.h>       //fcntl for File control

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);  //fd for file descriptor.
                                        //Every file gets a unique number which is fd.
                                        //for fd array is allocated and first 3 elements of array are reserved from 0 to 2
                                        //so generally fd is 3

    if(fd == -1)                        // we re not able to create file if fd = -1
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully created with fd %d\n",fd);
    }

    return 0;
}