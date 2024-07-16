//Write an application which accept file name from user and one string from user.
//Write that string at end of file.

//Input: Demo.txt
//       Hello World!
//Output: Write Hello World! at end of Demo.txt file

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0, Ret = 0, Total = 0;
    char FileName[30];
    char Buffer[100] = {'\0'};
    

    printf("Enter name of file you want to open : ");
    scanf("%s", FileName);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file.");
        return 0;
    }
    
    printf("Enter the data you want to write in file:\n");
    scanf(" %[^\n]s", Buffer);

    write(fd, Buffer, strlen(Buffer));

    close(fd);

    return 0;
}