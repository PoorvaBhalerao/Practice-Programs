//Write an application which accept file name from user
//and read all data from that file and display contents on screen.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0, Ret = 0;
    char FileName[30];
    char Arr[100] = {'\0'};
    

    printf("Enter name of file you want to open : ");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file.");
    }
    
    Ret = read(fd, Arr, 20);

    printf("Data from file is: %s\n", Arr);

    close(fd);


    return 0;
}