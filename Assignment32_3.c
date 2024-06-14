//Write a program which accept string from user and print below pattern
//Input: "Poorva"
//Output:   P   
//          P   o              
//          P   o   o  
//          P   o   o   r   
//          P   o   o   r   v 
//          P   o   o   r   v   a

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
    
   
    for(i = 1; i<=length ; i++)
    {
        for(j =0; j<i ;j++)
        {

            printf("%c\t",str[j]);

        }
        
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