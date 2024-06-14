//Write a program which accept string from user and print below pattern
//Input: "Poorva"
//Output:   P   o   o   r   v   a
//          P   o   o   r   v               
//          P   o   o   r   
//          P   o   o   
//          P   o  
//          P   

#include<stdio.h>
#include<string.h>

void Display(const char *str)
{
    int i = 0, j = 0;
    int length = 0;
    int K = 0;
    const char *ptr = str;
    while(*ptr != '\0')
    {
        length++;
        ptr++;
    }
    
    K = length;
    for(i = 0; i<length ; i++)
    {
        for(j = 0; j<K ;j++)
        {

            printf("%c\t",str[j]);

        }
        K--;
        printf("\n");
    }
}


int main()
{
    char Arr[50];

    printf("Enter a string: \n");
    scanf("%[^'\n']s", Arr);

    Display(Arr);

    return 0;
}