// Accept string from user and in place of space replace it with '_'

#include<stdio.h>


void UpdateString(char *str)
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
           *str = '_';           
        }
     
        str++;
    }
  
    
}

int main()
{
    char Arr[100];
    
    printf("Enter a string: \n");
    scanf("%[^'\n']s", Arr);

    UpdateString(Arr);       

    printf("Updated String is: %s\n",Arr);


    return 0;
}