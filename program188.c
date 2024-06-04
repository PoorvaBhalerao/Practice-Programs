// Accpet string and show character by character  using while loop
#include<stdio.h>



void Display(char *str)
{
    while(*str != '\0')
    {
        printf("%c\n", *str);     
        str++;
    }
  
    
}

int main()
{
    char Arr[100];
    
    printf("Enter a string: \n");
    scanf("%[^'\n']s", Arr);
    
    Display(Arr);       

    


    return 0;
}