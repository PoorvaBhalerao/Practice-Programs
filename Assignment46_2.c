//Write an application which accept file name from user and create that file.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char FileName[30];

    printf("Enter name of file you want to create: ");
    scanf("%s", FileName);

    fd = creat(FileName, 0777);

    if(fd == -1)
    {
        printf("Unable to create the file.");
    }
    else
    {
        printf("File has been created Successfully");
    }



    return 0;
}